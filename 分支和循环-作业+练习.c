#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////���Լ��-շת�����
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

////����
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

//100-200������--�Գ���
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

//ϵͳ����

#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ�����ڹػ��������롰��������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//goto��䳣�����������Ƕ��
	}
	return 0;
}