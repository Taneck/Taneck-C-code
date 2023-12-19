#define _CRT_SECURE_NO_WARNINGS
//after题解
#include <stdio.h>
int ans[10001] = { 0 };
void swap(int arr[], int l, int r)
{
	while (l < r)
	{
		int temp;
		temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
}

void add(int arr[], int n, int m)
{
	int i, j, k,temp;
	for (k = 1; k <= m; k++)
	{
		for (i = n - 1; i >= 1; i--)
			if (arr[i] < arr[i + 1]) break;//找到i，此i后的为逆序排列，i终结逆序排列
		for (j = n; j > i; j--)
			if (arr[j] > arr[i]) break;//找到j，arr[j] > arr[i]
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		swap(arr, i+1, n);//反转i到j间的数字，效果等同于变为升序
	}
}

int main()
{
	int i,n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		scanf("%d", &ans[i]);
	add(ans,n,m);
	for (i = 1; i < n; i++)
		printf("%d ", ans[i]);
	printf("%d", ans[i]);
	return 0;
}