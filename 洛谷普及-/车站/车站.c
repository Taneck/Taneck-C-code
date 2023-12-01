#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibplus(int n)
{
	int a = 0;
	int b = 1;
	int c = 1;
	int ret = 1;
	if (n == 2)
	{
		return 1;
	}
	if (n == 1)
	{
		return 0;
	}
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		ret += c;
		n--;
	}
	return ret;
}

int main()
{
	int a, n, m, x;
	int y;//第二站上下车人数
	scanf("%d %d %d %d", &a, &n, &m, &x);

	switch (x)
	{
	case 1:
	case 2:
		printf("%d", a);
		break;
	case 3:
		printf("%d", 2 * a);
		break;
	default:
		y = (m - 2 * a - (fibplus(n - 1 - 3) * a)) / fibplus(n - 1 - 2);
		if (x == n)
		{
			printf("%d", 2 * a + fibplus(x - 1 - 2) * y + fibplus(x - 1 - 3) * a);
		}
		else
		{
			printf("%d", 2 * a + fibplus(x - 2) * y + fibplus(x - 3) * a);
		}
		break;
	}
	return 0;
}