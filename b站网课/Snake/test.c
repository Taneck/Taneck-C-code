#define _CRT_SECURE_NO_WARNINGS 1

#include <locale.h>
#include "snake.h"

void test()
{
	int ch = 0;
	do
	{
		system("cls");
		//����̰����
		Snake snake = { 0 };
		//��ʼ����Ϸ
		GameStart(&snake);
		//������Ϸ
		GameRun(&snake);
		//������Ϸ -- �ƺ���
		GameEnd(&snake);
		SetPos(20, 15);
		printf("����һ����(Y/N):");
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