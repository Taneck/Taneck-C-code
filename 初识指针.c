#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	////sizeof 返回值类型是无符号整型，可用u，用zu最准确
//	//printf("%d\n", sizeof(char*));//x64--64位机器指针变量大小为8；x86--32位机器指针变量大小为4
//	//printf("%u\n", sizeof(char*));
//	//printf("%zu\n", sizeof(char*));
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//
//	//a = 0x11223344;
//	//char* pc = (char*) & a;//pc内同样可以存放a的地址，但效果不同
//	//*pc = 0;
//	//
//	//指针类型决定了指针在被解引用时访问几个字节
//	//int*解引用访问4个字节
//	//char*解引用访问1个字节
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = (char*) & a;
//	//printf("pa=%p\n", pa);
//	//printf("pa+1=%p\n", pa+1);
//	//printf("pc=%p\n", pc);
//	//printf("pc+1=%p\n", pc+1);
//	////指针类型决定了指针+1/-1操作的时候，跳过了几个字节（决定了指针的步长)
//
//	//int a = 0;
//	//int* pi = &a;//pi 解引用访问4个字节，pi+1跳过4个字节
//	//float* pf = &a;//pf 解引用也访问4个字节，pf+1也跳过4个字节
//	////但是 int*和float*不能通用
//	//*pi = 100;//存到内存中的数不同
//	//*pf = 100.0;//浮点数和整型在内存中存储方式不同
//
//	////野指针
//	////①未初始化
//	//int* p;
//	////p没有初始化，就意味着没有明确的指向
//	////一个局部变量不初始化的话，放的值是随机值：0xcccccccc
//	//*p = 0;//非法访问内存了，这里的p就是野指针
//	////②指针越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	////③指针指向的空间释放
//	//int* test()
//	//{
//	//	int a = 10;
//	//	return &a;
//	//}
//	//int main()
//	//{
//	//	int* p = test();
//	//	return 0;
//	//}
//
//	////野指针避免方法
//	////开始就初始化
//	//int a = 10;
//	//int* p = &a;
//	////int* p1 = NULL;
//	////*p1 = 100;//err
//	//int* p2 = NULL;
//	//if (p2 != NULL)
//	//{
//	//	*p2 = 100;//ok
//	//}
//	////避免返回局部变量的地址
//
//	return 0;
//}

////指针运算
//
//////1.指针+-整数
////#define VALUE 5
////int main()
////{
////	//float value[VALUE];
////	//float* vp;
////	////指针+-整数；指针的关系运算
////	//for (vp = &value; vp < &value[VALUE];)
////	//{
////	//	*vp++ = 0;
////	//	//*vp = 0;
////	//	//vp++;
////	//}
////
////	//int arr[10] = { 0 };
////	//int* p = arr;
////	//int i;
////	//for (i = 0; i < 10; i++)
////	//{
////	//	*(p + i) = 1;	
////	//}
////
////	return 0;
////}
//
//////2.指针-指针------前提是指向同一块空间的两个指针
//////int main()
//////{
//////	int arr[10] = { 0 };
//////	printf("%d\n", &arr[0] - &arr[9]);//-9，得到的是元素个数
//////	printf("%d\n", &arr[9] - &arr[0]);//9
//////	return 0;
//////}
////
//////int mystrlen(char* str)
//////{
//////	char* start = str;
//////	while (*str != '\0')
//////	{
//////		str++;
//////	}
//////	return (str - start);
//////}
//////int main()
//////{
//////	int len = mystrlen("abcdef");
//////	printf("%d\n", len);
//////	return 0;
//////}

////指针和数组
////可以通过指针访问数组
//int* p=arr[0]

////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;//a=20
//	return 0;
//}

//指针数组
int main()
{
	int a = 10;
	int b = 9;
	int c = 6;
	int* parr[10] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", parr[i]);
		printf("%d\n", *(parr[i]));
	}
	return 0;
}
//用指针数组模拟二维数组
int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 2,2,3,4 };
	int arr3[] = { 4,2,3,4 };
	
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}

	return 0;
}