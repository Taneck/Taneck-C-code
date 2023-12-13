#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int best[25][30000] = { 0 };
int price[25] = { 0 };
int value[25] = { 0 };
int main()
{
	int p, m, i, j;
	scanf("%d %d", &p, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &price[i], &value[i]);
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= p; j++)
		{
			if (price[i] > j)//价格大于背包
			{
				best[i][j] = best[i - 1][j];
			}
			else
			{
				int temp1 = best[i - 1][j];
				int temp2 = price[i] * value[i] + best[i - 1][j - price[i]];
				best[i][j] = temp1 > temp2 ? temp1 : temp2;
			}
		}
	}
	printf("%d", best[m][p]);
	return 0;
}