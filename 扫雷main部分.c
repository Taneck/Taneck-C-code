#define _CRT_SECURE_NO_WARNINGS
#include "扫雷game部分.h"
void menu()
{
	printf("*********扫雷游戏*********\n");
	printf("********共10枚地雷********\n");
	printf("**************************\n");
	printf("****     1.play       ****\n");
	printf("****     0.exit       ****\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("请选择：\n");
}
void game()
{
	int i, j;
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷
	char show[ROWS][COLS] = { 0 };//存放排查出的雷
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');

	//设置雷
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);//仅仅测试时用，实际设置为注释

	displayboard(show, ROW, COL);

	//排查雷
	findmine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入1或0！\n");
			break;
		}
	} while (input);
	return 0;
}