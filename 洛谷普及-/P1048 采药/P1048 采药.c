#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int best[101][1001] = { 0 };
	int herb_time[101] = { 0 };
	int herb_value[101] = { 0 };
	int t, m, i, j;
	scanf("%d %d", &t, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &herb_time[i], &herb_value[i]);
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= t; j++)
		{
			if (herb_time[i] > j)//时间大于背包
			{
				best[i][j] = best[i - 1][j];
			}
			else
			{
				int temp1 = best[i - 1][j];
				int temp2 = herb_value[i] + best[i - 1][j - herb_time[i]];
				best[i][j] = temp1 > temp2 ? temp1 : temp2;
			}
		}
	}
	printf("%d", best[m][t]);
	return 0;
}