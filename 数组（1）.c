#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////数组在内存中是连续储存的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]在 %p\n", i, &arr[i]);
//	}
//	return 0;
//}

////二维数组的创建与使用
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//3行4列，一个大括号表示一行
//	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//初始化时，列不能省略
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中也是连续储存的
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//3行4列，一个大括号表示一行
	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//初始化时，列不能省略
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]在%p ", i,j,&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	 
//	return 0;
//}