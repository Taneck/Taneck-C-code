#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////递归--两个必要条件--限制条件+逼近限制条件
//void p(int n)
//{
//	//如在前面，则为倒序printf("%d ", n % 10);
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

//模拟实现strlen()
////1.用到了临时变量计数器
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
//2.不用临时变量
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


////add.h中
////避免同一头文件被多次引用
//#ifndef __ADD_H__//if not define
//#define __ADD_H__
//
////函数的声明
//int Add(int x, int y);
//
//#endif