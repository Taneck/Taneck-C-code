#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu()
{
	printf("\n");
	printf("\n");
	printf("menu:\n");
	printf("**************************\n");
	printf("*******������1����0*******\n");
	printf("*******1.��ʼ 0.�˳�******\n");
	printf("**************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	int count = 0;
	printf("��ʼ��Ϸ\n");
	printf("����[1,100]����������\n");
	ret = rand()%100+1;//RAND_MAX-32767//����1-100���
	while (1)
	{
		printf("��������Ĳ²⣺\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
			count++;
		}
		else if (guess < ret)
		{
			printf("��С��\n");
			count++;
		}
		else
		{
			printf("�¶���\n");
			count++;
			break;
		}
	}
	switch (count)
	{
	case 1:
		printf("����һ�β¶ԣ��Ե�õİɣ�\n");
		printf("���У��Ҽ��������������������\n");
		printf("���У��Ҽ��������������������\n");
		printf("���У��Ҽ��������������������\n");
		printf("���У��Ҽ��������������������\n");
		printf("���У��Ҽ��������������������\n");
		char input[20] = { 0 };
		system("shutdown -s -t 60");
	again:
		printf("���Խ���60s�ڹػ��������롰��������ȡ���ػ�\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;//goto��䳣�����������Ƕ��
		}

		break;
	case 2:
	case 3:
		printf("byd����������%d�ξͲ¶���\n", count);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		printf("��������еȣ�����%d��\n", count);
		break;
	default:
		printf("ʲôb������������ô���(%d��)������ȥ�ɣ�����������\n", count);
		break;
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ���:��ǰʱ��-�������ʼʱ�䣨1970.1.1.0:0:0��=?? s
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
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("������1��0\n");
			break;
		}
	} while (input);
	return 0;
}