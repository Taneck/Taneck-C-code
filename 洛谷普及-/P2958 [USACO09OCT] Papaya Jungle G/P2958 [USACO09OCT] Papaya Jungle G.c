#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int r, c, jungle[41][41] = { 0 }, i, j, ans = 0;
	scanf("%d %d", &r, &c);
	for (i = 1; i <= r; i++)
		for (j = 1; j <= c; j++)
			scanf("%d", &jungle[i][j]);
	i = 1;
	j = 1;
	while (1)
	{
		ans += jungle[i][j];
		jungle[i][j] = 0;
		if (i == r && j == c) break;
		else if (jungle[i + 1][j] > jungle[i][j + 1] && jungle[i + 1][j] > jungle[i][j - 1] && jungle[i + 1][j] > jungle[i - 1][j] && i + 1 <= r) i++;
		else if (jungle[i - 1][j] > jungle[i][j + 1] && jungle[i - 1][j] > jungle[i][j - 1] && jungle[i - 1][j] > jungle[i + 1][j] && i - 1 >= 1) i--;
		else if (jungle[i][j + 1] > jungle[i + 1][j] && jungle[i][j + 1] > jungle[i][j - 1] && jungle[i][j + 1] > jungle[i - 1][j] && j + 1 <= c) j++;
		else if (jungle[i][j - 1] > jungle[i][j + 1] && jungle[i][j - 1] > jungle[i + 1][j] && jungle[i][j - 1] > jungle[i - 1][j] && j - 1 >= 1) j--;
	}
	printf("%d", ans);
	return 0;
}