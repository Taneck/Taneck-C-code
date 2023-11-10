#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组名是首元素的地址，除了以下两种例外
//1.sizeof(数组名)计算的是整个数组的大小，单位是字节
//2.&数组名，数组名代表整个数组，&数组名取出的是整个数组的地址
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);//①
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//②
	printf("%p\n", &arr[0] +1);
	//①和②等价

	printf("%p\n", &arr);//③
	printf("%p\n", &arr+1);
	//&数组名取出的是整个数组的地址（的头）
	return 0;
}

////冒泡排序优化版
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,7,8,3,5,4,6,9 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}