#define _CRT_SECURE_NO_WARNINGS
#include "ɨ��game����.h"

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
	printf("---------------ɨ����Ϸ----------------\n");
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
	printf("---------------ɨ����Ϸ----------------\n");
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
		if (count == 0)//��������Χû����
		{
			int count1;
			int i;
			int j;
			for (i = -1; i <= 1; i++)//�����õ���Χ�ĵ�
			{
				for (j = -1; j <= 1; j++)
				{
					if (show[x + i][y + j] == '*')//������Χĳһ��û�б��Ų��
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
	int win = 0;//�Ѿ��ҵ��ķ��׵�ĸ���
	int choice = 0;//ѡ���Ų�or���
	while (win < row * col - easy_count)
	{
		printf("��Ҫ�Ų飬����1����Ҫ�á�X����ǵ��ף�����2����Ҫȡ����ǣ�����3��\n");
		scanf("%d", &choice);
		switch (choice)
		{
		default:
			printf("������1/2/3��ѡ���Ų�/���/ȡ�����\n");
			break;
		case 2:
			printf("������Ҫ���Ϊ���׵����꣺\n");
			scanf("%d %d", &x, &y);
			mark(show, x, y);
			break;
		case 3:
			printf("������Ҫȡ����ǵ����꣺\n");
			scanf("%d %d", &x, &y);
			unmark(show, x, y);
			break;
		case 1:
			printf("������Ҫ�Ų�����꣺\n");
			scanf("%d %d", &x, &y);
			if (show[x][y] != '*')
			{
				printf("�õ��ѱ��Ų���������ظ��Ų�\n");
			}
			else
			{
				if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ���
				{
					if (mine[x][y] == '1')//����������
					{
						printf("\n���ź����㱻ը���ˣ���Ϸʧ��\n\n\n");
						goto die;
					}
					else//�����겻����
					{
						win++;
						int count = get_mine_surround(mine, x, y);
						show[x][y] = count + '0';//����ת��Ϊ�ַ����
						bomb(mine, show, x, y, count);//1.�����겻���ף�2.��������Χû���ף�3.ը����������Χû�б��Ų���ĵ㣬4.��Χ�ĵ��ظ��ݹ�
						displayboard(show, ROW, COL);
					}
				}
				else
				{
					printf("��������겻�Ϸ�������������\n");
				}
			}
			break;
		}
	}
	if (win == row * col - easy_count)
	{
		printf("\n��ϲ�㣬���׳ɹ�����Ϸʤ����\n\n\n");
	}
	die:
	;
}