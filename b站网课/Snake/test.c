#define _CRT_SECURE_NO_WARNINGS 1

#include <locale.h>
#include "snake.h"

void test()
{
	//����̰����
	Snake snake = { 0 };
	//��ʼ����Ϸ
	GameStart(&snake);
	////������Ϸ
	//GameRun();
	////������Ϸ -- �ƺ���
	//GameEnd();
}

int main()
{
	setlocale(LC_ALL, "");
	test();
	return 0;
}