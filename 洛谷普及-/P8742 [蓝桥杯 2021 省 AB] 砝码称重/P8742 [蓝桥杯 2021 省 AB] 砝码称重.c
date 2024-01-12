#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int weight[111], dp[111][111111], i, j, n, sum, ans;
int main()
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &weight[i]);
		sum += weight[i];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= sum; j++)
		{
			if (dp[i - 1][j] == 1)	dp[i][j] = 1;
			else if (j == weight[i])	dp[i][j] = 1;
			else if (dp[i - 1][j + weight[i]] == 1)	dp[i][j] = 1;
			else if (dp[i - 1][abs(j - weight[i])] == 1)	dp[i][j] = 1;
			if (i == n && dp[i][j] == 1)	ans++;
		}
	}
	printf("%d", ans);
	return 0;
}