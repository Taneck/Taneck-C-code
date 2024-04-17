#define _CRT_SECURE_NO_WARNINGS 1

#include <locale.h>
#include "snake.h"

void test()
{
	int ch = 0;
	do
	{
		system("cls");
		//创建贪吃蛇
		Snake snake = { 0 };
		//初始化游戏
		GameStart(&snake);
		//运行游戏
		GameRun(&snake);
		//结束游戏 -- 善后工作
		GameEnd(&snake);
		SetPos(20, 15);
		printf("再来一局吗？(Y/N):");
		ch = getchar();
		while (getchar() != '\n');

	} while (ch=='Y'|| ch == 'y');
	SetPos(0, 27);
}

int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));
	test();
	return 0;
}