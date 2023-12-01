#define _CRT_SECURE_NO_WARNINGS
#include "扫雷game部分.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i;
	int j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	printf("---------------扫雷游戏----------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷游戏----------------\n");
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_surround(char mine[ROWS][COLS], int x, int y)
{
	int i;
	int j;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += mine[x + i][y + j] - '0';
		}
	}
	return count;
}

void bomb(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int count)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (count == 0)//该坐标周围没有雷
		{
			int count1;
			int i;
			int j;
			for (i = -1; i <= 1; i++)//遍历该点周围的点
			{
				for (j = -1; j <= 1; j++)
				{
					if (show[x + i][y + j] == '*')//遇到周围某一点没有被排查过
					{
						count1 = get_mine_surround(mine, x + i, y + j);
						show[x + i][y + j] = count1 + '0';
						bomb(mine, show, x + i, y + j, count1);
					}
				}
			}
		}
	}
}

void mark(char show[ROWS][COLS], int x, int y)
{
	show[x][y] = 'X';
	displayboard(show, ROW, COL);
}
void unmark(char show[ROWS][COLS], int x, int y)
{
	show[x][y] = '*';
	displayboard(show, ROW, COL);
}


void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//已经找到的非雷点的个数
	int choice = 0;//选择排查or标记
	while (win < row * col - easy_count)
	{
		printf("若要排查，输入1。若要用‘X’标记地雷，输入2。若要取消标记，输入3。\n");
		scanf("%d", &choice);
		switch (choice)
		{
		default:
			printf("请输入1/2/3以选择：排查/标记/取消标记\n");
			break;
		case 2:
			printf("请输入要标记为地雷的坐标：\n");
			scanf("%d %d", &x, &y);
			mark(show, x, y);
			break;
		case 3:
			printf("请输入要取消标记的坐标：\n");
			scanf("%d %d", &x, &y);
			unmark(show, x, y);
			break;
		case 1:
			printf("请输入要排查的坐标：\n");
			scanf("%d %d", &x, &y);
			if (show[x][y] != '*')
			{
				printf("该点已被排查过，不能重复排查\n");
			}
			else
			{
				if (x >= 1 && x <= row && y >= 1 && y <= col)//坐标合法性
				{
					if (mine[x][y] == '1')//该坐标是雷
					{
						printf("\n很遗憾，你被炸死了，游戏失败\n\n\n");
						goto die;
					}
					else//该坐标不是雷
					{
						win++;
						int count = get_mine_surround(mine, x, y);
						show[x][y] = count + '0';//数字转化为字符存放
						bomb(mine, show, x, y, count);//1.该坐标不是雷，2.该坐标周围没有雷，3.炸开该坐标周围没有被排查过的点，4.周围的点重复递归
						displayboard(show, ROW, COL);
					}
				}
				else
				{
					printf("输入的坐标不合法，请重新输入\n");
				}
			}
			break;
		}
	}
	if (win == row * col - easy_count)
	{
		printf("\n恭喜你，排雷成功，游戏胜利！\n\n\n");
	}
	die:
	;
}