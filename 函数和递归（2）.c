#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////�ݹ�--������Ҫ����--��������+�ƽ���������
//void p(int n)
//{
//	//����ǰ�棬��Ϊ����printf("%d ", n % 10);
//	if (n > 9)
//	{
//		p(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	p(n);
//	//p(1234)
//	//p(123) 4
//	//p(12) 3 4
//	//p(1) 2 3 4
//	return 0;
//}

//ģ��ʵ��strlen()
////1.�õ�����ʱ����������
//int mystrlen(char* arrstart)
//{
//	int count=0;
//	while (*arrstart != '\0')
//	{
//		count++;
//		*arrstart++;
//	}
//	return count;
//}
//2.������ʱ����
int mystrlen(char* arrstart)
{
	//mystrlen("bit")
	//1+mystrlen("it")
	//1+1+mystrlen("t")
	//1+1+1+mystrlen("")
	if (*arrstart != '\0')
	{
		return 1 + mystrlen(arrstart+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	int len = mystrlen(arr);
	printf("%d\n", len);
	return 0;
}


////add.h��
////����ͬһͷ�ļ����������
//#ifndef __ADD_H__//if not define
//#define __ADD_H__
//
////����������
//int Add(int x, int y);
//
//#endif