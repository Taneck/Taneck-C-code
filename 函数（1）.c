#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

////strcpy函数
//int main()
//{
//	char a1[] = "bit";
//	char a2[20] = "#########";
//	strcpy(a2, a1);
//	printf("%s\n", a2);
//	return 0;
//}

////memset函数
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int main()
//{
//
//	return 0;
//}

////无返回值的函数,交换数值
////形参其实是实参的一份临时拷贝
////对形参的修改是不会改变实参的
////形参和实参名字可以相同
//void swap(int* pa,int*pb)//传入地址
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

////用函数实现二分查找
////                 本质上arr是个指针
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)//等号不能去！！！！
//	{
//		//下一句一开始写错了！！！！注意！！！！mid要写在循环内
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                     传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到该数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n",ret);
//	}
//	return 0;
//}

////调用一次函数，计数加一
//void add(int* pnum)
//{
//	(*pnum)++;//++优先级较高
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);//1
//	add(&num);
//	printf("num=%d\n", num);//2
//	add(&num);
//	printf("num=%d\n", num);//3
//}

//函数链式访问
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf打印43，同时返回数值为字符数
	return 0;
}

//函数的申明，定义，调用
// .h文件内放的是函数的申明 如int add(int x, int y)或者 int(int, int)
// 引用自己的头文件用"",如  #include "add.h"
// .c文件内放的是函数的定义 
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}