#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int n, m, x, y;
	int i, j;
	long board[30][30] = { 0 };
	scanf("%d %d %d %d", &a, &b, &c, &d);
	n = a + 2;
	m = b + 2;
	x = c + 2;
	y = d + 2;//自定义的扩边版棋盘，平移操作
	board[x][y] = -1;
	board[x - 1][y - 2] = -1;
	board[x - 2][y - 1] = -1;
	board[x - 2][y + 1] = -1;
	board[x - 1][y + 2] = -1;
	board[x + 1][y - 2] = -1;
	board[x + 2][y - 1] = -1;
	board[x + 2][y + 1] = -1;
	board[x + 1][y + 2] = -1;//马点
	board[2][2] = 1;
	for (i = 2; i <= n; i++)//行
	{
		for (j = 2; j <= m; j++)//列
		{
			if (board[i][j] == -1)
			{
				continue;
			}
			if (board[i - 1][j] != -1)
			{
				board[i][j] += board[i - 1][j];
			}
			if (board[i][j - 1] != -1)
			{
				board[i][j] += board[i][j - 1];
			}
		}
	}
	if (board[n][m] == -1)
	{
		board[n][m] = 0;
		if (board[n - 1][m] != -1)
		{
			board[n][m] += board[n - 1][m];
		}
		if (board[n][m - 1] != -1)
		{
			board[n][m] += board[n][m - 1];
		}
	}
	printf("%ld", board[n][m]);
	return 0;
}


//if (board[n - 1][m] == -1)
//{
//	board[n][m] += board[n - 1][m];
//}
//if (board[n][m - 1] == -1)
//{
//	board[n][m] += board[n][m - 1];
//}