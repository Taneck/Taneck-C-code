#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//递推可行
int main()
{
	int n, i;
	int arr[1111] = { 1,1 };
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = arr[i / 2] + arr[i - 1];
		}
		else
		{
			arr[i] = arr[i - 1];
		}
	}
	printf("%d", arr[n]);
	return 0;
}


////递归都死
////int seperate(int n)
////{
////	if (n <= 1)
////	{
////		return 1;
////	}
////	else if (n == 2)
////	{
////		return 2;
////	}
////	else
////	{
////		if (n % 2 == 0)
////		{
////			return seperate(n / 2) + seperate(n - 2);
////		}
////		else
////		{
////			return seperate((n - 1) / 2) + seperate(n - 1 - 2);
////		}
////	}
////}
////
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	printf("%d", seperate(n));
////	return 0;
////}
//
//
////int seperate(int n)
////{
////	if (n / 2 > 0)
////	{
////		int count = 0;
////		for (int i = n / 2; i >= 0; i--)
////		{
////			count += seperate(i);
////		}
////		return count;
////	}
////	else
////	{
////		return 1;
////	}
////}
////
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	printf("%d", seperate(n));
////	return 0;
////}