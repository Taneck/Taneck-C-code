#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////�õݹ����׳�
//int fac(int n)
//{
//	if(1==n)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fac(n));
//	return 0;
//}

////���n��쳲�������
////�ݹ鷨��������
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 2) + fib(n - 1);//�����д������ظ�
//	}
//}
////ѭ����������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}
