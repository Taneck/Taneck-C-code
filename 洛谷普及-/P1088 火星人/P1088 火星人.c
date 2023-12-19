#define _CRT_SECURE_NO_WARNINGS
//after���
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
			if (arr[i] < arr[i + 1]) break;//�ҵ�i����i���Ϊ�������У�i�ս���������
		for (j = n; j > i; j--)
			if (arr[j] > arr[i]) break;//�ҵ�j��arr[j] > arr[i]
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		swap(arr, i+1, n);//��תi��j������֣�Ч����ͬ�ڱ�Ϊ����
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