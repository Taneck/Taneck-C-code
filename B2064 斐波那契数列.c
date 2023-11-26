#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//B2064 ì³²¨ÄÇÆõÊýÁÐ
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n, i;
	int arr[50] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d\n", fib(arr[i]));
	}
	printf("%d", fib(arr[n - 1]));
	return 0;
}