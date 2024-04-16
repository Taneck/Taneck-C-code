#define _CRT_SECURE_NO_WARNINGS 1

#include <locale.h>
#include "snake.h"

void test()
{
	//创建贪吃蛇
	Snake snake = { 0 };
	//初始化游戏
	GameStart(&snake);
	////运行游戏
	//GameRun();
	////结束游戏 -- 善后工作
	//GameEnd();
}

int main()
{
	setlocale(LC_ALL, "");
	test();
	return 0;
}