#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int b;
	int n;
	int m;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		a = n / 2 + 1;
		b = n / 2 + 1;
	}
	else
	{
		a = n / 2 + 1;
		b = n / 2 + 2;
	}
	m = a * b;
	printf("%d\n", m);
}