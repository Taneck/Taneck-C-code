#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////最大公约数-辗转相除法
//int main()
//{
//	int a;
//	int b;
//	int r;
//	scanf("%d%d", &a, &b);
//	while (r=a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

////闰年
//int main()
//{
//	int count = 0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//100-200的素数--试除法
//#include <math.h>
//int main()
//{
//	int count=0;
//	for (int i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//系统命令

#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑将在一分钟内关机，若输入“我是猪”则取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//goto语句常用在跳出多层嵌套
	}
	return 0;
}