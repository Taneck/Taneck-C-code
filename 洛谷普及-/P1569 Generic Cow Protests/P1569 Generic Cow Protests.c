#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, a[1001], f[1001];
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = i; j >= 1; --j)
		{
			sum += a[j];
			if (sum >= 0 && f[j - 1] + 1 > f[i])
				if (j == 1)
					f[i] = f[j - 1] + 1;
				else if (f[j - 1] != 0)
					f[i] = f[j - 1] + 1;
		}
	}
	if (f[n] > 0)	printf("%d\n", f[n]);
	else printf("Impossible\n");
	return 0;
}

////³¬Ê±½â
//#include <stdio.h>
//int grouping(int arr[],int left,int right,int sum)
//{
//	int i = 0,sum_l = 0,sum_r = 0,last = 0,ret=0;
//	for (i = 0; i < right - left + 1; i++)
//	{
//		sum_l += arr[left + i];
//		sum_r = sum - sum_l;
//		if (sum_l >= 0 && sum_r >= 0)
//		{
//			if (left + i == right)
//				ret= 1;
//			else
//				ret=grouping(arr, left, left + i, sum_l) + grouping(arr, left + i + 1, right, sum_r);
//			if (ret > last)
//				last = ret;
//		}
//	}
//	return last;
//}
//int main()
//{
//	int i, j, n, arr[1111] = { 0 }, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	if (sum < 0)
//	{
//		printf("Impossible");
//		return 0;
//	}
//	int ret = grouping(arr,0,n-1,sum);
//	printf("%d", ret);
//	return 0;
//}