#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct people//结构体类型申明
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1, p2;//可有可无，是全局变量
//struct people p3, p4;//全局变量
//
//struct st
//{
//	struct people p;//结构体类型成员可以是结构体
//	int num;
//	float f;
//};
//
//void print2(struct people* sp)//更优
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//
//void print1(struct people p)//临时拷贝时会浪费空间，性能下降，函数在传参时，参数需要压栈
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
//}
//
//int main()
//{
//	struct people p5 = { "vae","12345678911","男",181};//局部变量
//	struct st s = { {"张三","12312312312","女",167},100,3.14f };//浮点数在内存中不能精确保存，存的是3.14000010
//	printf("%s %s %s %d\n", p5.name, p5.tele, p5.sex, p5.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print2(&p5);
//	print1(p5);
//	return 0;
//}

//计算整数中的二进制个数三种解法

int count1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int count2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		count += ((n >> i) & 1);
	}
	return count;
}
int count3(int n)//谷歌笔试题
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//还可以判断是否是2的n次方，if(n&(n-1)==0)，则是
		count++;
	}
	return count;
}


int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", count1(num));
	printf("%d\n", count2(num));
	printf("%d\n", count3(num));
	return 0;
}