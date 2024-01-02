#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, arr[111111] = { 0 }, memory[111111] = { 0 }, max = -999999,flag=0;//flag用于判断是否全负这一特殊情况
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		if (flag == 0)
			if (arr[i] > 0)
				flag = 1;
	}
	if (flag == 0)
	{
		int profit = -99999999;
		for (i = 1; i <= n; i++)
		{
			if (arr[i] > profit)	profit = arr[i];
		}
		printf("%d",profit);
		return 0;
	}
	for (i = n; i >= 1; i--)
	{
		int temp = memory[i + 1]+ arr[i] > arr[i] ? memory[i + 1] + arr[i] : arr[i];
		memory[i] = temp > 0 ? temp : 0;
	}
	for(i=1;i<=n;i++)
	{
		if (memory[i] > max)	max = memory[i];
	}
	printf("%d", max);
	return 0;
}




//int main()
//{
//	int n,i,j, arr[111111] = { 0 },max=-999999,start=0,profit=0;
//	scanf("%d", &n);
//	for (i = 1; i <= n  ; i++)
//	{
//		scanf("%d",&arr[i]);
//		if (start == 0)
//			if (arr[i] > 0)
//				start = i;
//	}
//	if (start == 0)
//	{
//		profit = -99999999;
//		for (i = 1; i <= n; i++)
//		{
//			if (arr[i] > profit)	profit = arr[i];
//		}
//		printf("%d",profit);
//		return 0;
//	}
//	for (i = start; i <= n; i++)
//	{
//		if (arr[i] >= 0)	
//			profit += arr[i];
//		else
//		{
//			int temp = 0;
//			for (j = i ; j <= n; j++)
//			{
//				temp += arr[j];
//				if (temp >= 0)
//				{
//					profit += temp;
//					break;
//				}
//			}
//			i = j;
//		}
//	}
//	printf("%d", profit);
//	return 0;
//}