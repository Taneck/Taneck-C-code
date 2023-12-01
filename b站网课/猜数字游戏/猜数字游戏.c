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
	printf("*******请输入1或者0*******\n");
	printf("*******1.开始 0.退出******\n");
	printf("**************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	int count = 0;
	printf("开始游戏\n");
	printf("答案是[1,100]间的随机整数\n");
	ret = rand()%100+1;//RAND_MAX-32767//生成1-100随机
	while (1)
	{
		printf("请输入你的猜测：\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
			count++;
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
			count++;
		}
		else
		{
			printf("猜对了\n");
			count++;
			break;
		}
	}
	switch (count)
	{
	case 1:
		printf("啊？一次猜对？吃点好的吧！\n");
		printf("不行！我嫉妒你的运气！！！！！\n");
		printf("不行！我嫉妒你的运气！！！！！\n");
		printf("不行！我嫉妒你的运气！！！！！\n");
		printf("不行！我嫉妒你的运气！！！！！\n");
		printf("不行！我嫉妒你的运气！！！！！\n");
		char input[20] = { 0 };
		system("shutdown -s -t 60");
	again:
		printf("电脑将在60s内关机，若输入“我是猪”则取消关机\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;//goto语句常用在跳出多层嵌套
		}

		break;
	case 2:
	case 3:
		printf("byd运气不错啊，%d次就猜对了\n", count);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		printf("这次运气中等，猜了%d次\n", count);
		break;
	default:
		printf("什么b运气，猜了这么多次(%d次)，烧香去吧，别在这玩了\n", count);
		break;
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳:当前时间-计算机起始时间（1970.1.1.0:0:0）=?? s
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
			printf("已退出游戏\n");
			break;
		default:
			printf("请输入1或0\n");
			break;
		}
	} while (input);
	return 0;
}