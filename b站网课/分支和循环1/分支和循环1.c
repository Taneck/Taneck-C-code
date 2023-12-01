#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////输出1-100内的奇数
//int main()
//{
//	int i = 1;
//
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////switch语句
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	/*case 1:
//		printf("星期一\n" );
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;*/
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://default不一定在最后
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i=1;
//	while (i <= 10)
//	{
//		if (5==i)
//		{
//			//continue;//跳过本次循环的剩余代码
//			//break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//getchar putchar
int main()
{
	char ch = 0;
	//ctrl+z
	//EOF -> end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/

	int i=-3;
	while (i != EOF)
	{
		printf("%d\n", i);
		i++;
	}

	return 0;
}