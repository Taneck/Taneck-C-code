#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bag[31][20001] = { 0 };
int main()
{
	int space[31] = { 0 };
	int n,v, i, j;
	scanf("%d", &v);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &space[i]);
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= v; j++)
		{
			if (space[i] > j)
			{
				bag[i][j] = bag[i - 1][j];
			}
			else
			{
				int tmp1 = bag[i - 1][j];
				int tmp2 = space[i] + bag[i - 1][j - space[i]];
				bag[i][j] = tmp1 > tmp2 ? tmp1 : tmp2;
			}
		}
	}
	printf("%d", v - bag[n][v]);
	return 0;
}