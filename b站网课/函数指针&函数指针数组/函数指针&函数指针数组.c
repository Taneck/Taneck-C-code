#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("******1.加法 2.减法******\n");
	printf("******3.乘法 4.除法******\n");
	printf("******0.退出       ******\n");
	printf("*************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);//ret = (*pf)(x, y)效果一样
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	//int (*pf)(int, int) = add;//pf是函数指针
	//int (*arr[4])(int, int) = { add,sub,mul,div };//arr是函数指针数组,也叫转移表
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("请输入1/2/3/4/0\n");
			break;
		}
	} while (input);
	return 0;
}

////qsort-这个函数可以排序任意类型的数据
//void qsort(void* base,//你要排序的数据的起始位置
//			size_t num,//待排序的数据元素个数
//			size_t width,//待排序的数据元素大小（单位是字节）
//			int (*cmp)(const void* e1,const void* e2)//函数指针-比较函数，因为每种类型的数据比较方式不同
//			);
////

int a = 10;
void* pa = &a;//void* 是无具体类型的指针，可以接受任意类型的地址
//void* 是无具体类型的指针，所以不能解引用操作，也不能+-整数
//在比较函数内部，将void*强制类型转换即可