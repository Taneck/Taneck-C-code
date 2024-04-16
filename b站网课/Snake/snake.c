#define _CRT_SECURE_NO_WARNINGS 1

#include "snake.h"

void SetPos(short x, short y)
{
	//获得标准输出设备的句柄
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//定位光标位置
	COORD pos = { 10,20 };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame() 
{
	SetPos(40, 41);
	wprintf(L"欢迎来到贪吃蛇小游戏\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"用↑↓←→来控制蛇的移动，按F3加速，按F4减速\n");
	SetPos(25, 15);
	wprintf(L"加速能够得到更高的分数\n");

	SetPos(42, 20);
	system("pause");
	system("cls");

}
void CreateMap()
{
	//上
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');
	}

	//下
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');
	}
	//左
	for (i = 1; i <=25 ; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'□');
	}
	//右
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", L'□');
	}
}

void GameStart(pSnake ps)
{
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");

	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(houtput, &CursorInfo);
	//1.打印欢迎界面//2.功能介绍
	WelcomeToGame();
	//3.绘制地图
	CreateMap();
	//4.创建蛇
	//5.创建食物
	//6.设置游戏的相关信息
}