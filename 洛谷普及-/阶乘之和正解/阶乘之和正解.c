#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void carry_bit(int arr[])//进位
{
	int i;
	for (i = 0; i < 80; i++)
	{
		while (1)
		{
			if (arr[i] >= 10)
			{
				arr[i + 1] += (arr[i] / 10);
				arr[i] %= 10;
			}
			else
			{
				break;
			}
		}
	}
}
int main()
{
	int n, i, j;
	int arr[80] = { 0 };//答案
	int brr[80] = { 1 };//暂存某时刻的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < 80; j++)
		{
			brr[j] *= i;
		}
		carry_bit(brr);
		for (j = 0; j < 80; j++)
		{
			arr[j] += brr[j];
		}
	}
	carry_bit(arr);
	for (j = 79; j >= 0; j--)
	{
		if (arr[j] != 0)
		{
			break;
		}
	}
	for (i = j; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	return 0;
}