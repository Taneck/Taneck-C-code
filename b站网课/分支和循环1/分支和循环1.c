#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////���1-100�ڵ�����
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

////switch���
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	/*case 1:
//		printf("����һ\n" );
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;*/
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://default��һ�������
//		printf("�������\n");
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
//			//continue;//��������ѭ����ʣ�����
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