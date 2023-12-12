#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	return gcd(y, x % y);
}

int main()
{
	int a, b, i, j, l;
	scanf("%d %d %d", &a, &b, &l);
	int ans_a = l;
	int ans_b = 1;
	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= l; j++)
		{
			if (gcd(i, j) == 1 && i * b >= j * a && i * ans_b < j * ans_a)
			{
				ans_a = i;
				ans_b = j;
			}
		}
	}
	printf("%d %d", ans_a, ans_b);
	return 0;
}