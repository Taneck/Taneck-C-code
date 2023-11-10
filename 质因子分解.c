#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	int i;
	int arr[10001] = { 0 };
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		int j;
		int temp = i;
		for (j = 2; j <= i; j++)
		{
			while (temp % j == 0)
			{
				arr[j]++;
				temp /= j;
			}
		}
	}
	for (i = 2; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d %d\n", i, arr[i]);
		}
	}
	return 0;
}

//³¬Ê±½â·¨
// 
//#include <stdio.h>
//#include <math.h>
//int is_prime(int x)
//{
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int i;
//	int arr[10001] = { 0 };
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		if (is_prime(i))
//		{
//			arr[i]++;
//		}
//		else
//		{
//			int j;
//			int temp = i;
//			while (temp % 2 == 0)
//			{
//				arr[2]++;
//				temp /= 2;
//			}
//			for (j = 3; j <= i; j = j + 2)
//			{
//				if (is_prime(j))
//				{
//					while (temp % j == 0)
//					{
//						arr[j]++;
//						temp /= j;
//					}
//				}
//			}
//		}
//	}
//	for (i = 2; i <= n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d %d\n", i, arr[i]);
//		}
//	}
//	return 0;
//}