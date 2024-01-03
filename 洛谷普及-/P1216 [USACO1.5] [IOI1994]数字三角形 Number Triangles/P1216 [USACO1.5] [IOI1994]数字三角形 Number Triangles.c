#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int triangle[1111][1111] = { 0 };
int ans[1111][1111] = { 0 };
int main()
{
	int i, j, n,max=-999;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
			scanf("%d", &triangle[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
		{
			int temp = ans[i - 1][j - 1] > ans[i - 1][j] ? ans[i - 1][j - 1] : ans[i - 1][j];
			ans[i][j] = triangle[i][j] + temp;
		}
	for (j = 1; j <= n; j++)
		if (ans[n][j] > max)	max = ans[n][j];
	printf("%d", max);
	return 0;
}