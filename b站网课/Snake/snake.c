#define _CRT_SECURE_NO_WARNINGS 1

#include "snake.h"

void SetPos(short x, short y)
{
	//��ñ�׼����豸�ľ��
	HANDLE houtput = NULL;
	houtput = GetStdHandle(STD_OUTPUT_HANDLE);

	//��λ���λ��
	COORD pos = { 10,20 };
	SetConsoleCursorPosition(houtput, pos);
}

void WelcomeToGame() 
{
	SetPos(40, 41);
	wprintf(L"��ӭ����̰����С��Ϸ\n");
	SetPos(42, 20);
	system("pause");
	system("cls");
	SetPos(25, 14);
	wprintf(L"�á��������������ߵ��ƶ�����F3���٣���F4����\n");
	SetPos(25, 15);
	wprintf(L"�����ܹ��õ����ߵķ���\n");

	SetPos(42, 20);
	system("pause");
	system("cls");

}
void CreateMap()
{
	//��
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'��');
	}

	//��
	SetPos(0, 26);
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'��');
	}
	//��
	for (i = 1; i <=25 ; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'��');
	}
	//��
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", L'��');
	}
}

void GameStart(pSnake ps)
{
	system("mode con cols=100 lines=30");
	system("title ̰����");

	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(houtput, &CursorInfo);
	//1.��ӡ��ӭ����//2.���ܽ���
	WelcomeToGame();
	//3.���Ƶ�ͼ
	CreateMap();
	//4.������
	//5.����ʳ��
	//6.������Ϸ�������Ϣ
}