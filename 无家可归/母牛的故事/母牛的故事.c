#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int n)
{
	int a = 0;
	int b = 1;
	int c = 1;
	int d;
	if (n == 1)
	{
		return a;
	}
	if (n == 2)
	{
		return b;
	}
	if (n == 3)
	{
		return c;
	}
	if (n >=4)
	{
		while ((n - 3) > 0)
		{
			d = a + c;
			a = b;
			b = c;
			c = d;
			n--;
		}
		return d;
	}
}
int ans(int n)
{
	int a = 1;
	for (int i = 0; i <= n - 1; i++)
	{
		a += plus(i+1);
	}
	return a;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", ans(n));
	return 0;
}