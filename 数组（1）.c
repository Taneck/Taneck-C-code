#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////�������ڴ��������������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]�� %p\n", i, &arr[i]);
//	}
//	return 0;
//}

////��ά����Ĵ�����ʹ��
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//3��4�У�һ�������ű�ʾһ��
//	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//��ʼ��ʱ���в���ʡ��
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

//��ά�������ڴ���Ҳ�����������
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//3��4�У�һ�������ű�ʾһ��
	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };//��ʼ��ʱ���в���ʡ��
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]��%p ", i,j,&arr[i][j]);
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