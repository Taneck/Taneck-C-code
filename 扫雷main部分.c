#define _CRT_SECURE_NO_WARNINGS
#include "ɨ��game����.h"
void menu()
{
	printf("*********ɨ����Ϸ*********\n");
	printf("********��10ö����********\n");
	printf("**************************\n");
	printf("****     1.play       ****\n");
	printf("****     0.exit       ****\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("��ѡ��\n");
}
void game()
{
	int i, j;
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ���
	char show[ROWS][COLS] = { 0 };//����Ų������
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');

	//������
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);//��������ʱ�ã�ʵ������Ϊע��

	displayboard(show, ROW, COL);

	//�Ų���
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������1��0��\n");
			break;
		}
	} while (input);
	return 0;
}