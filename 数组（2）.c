#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����������Ԫ�صĵ�ַ������������������
//1.sizeof(������)���������������Ĵ�С����λ���ֽ�
//2.&�������������������������飬&������ȡ��������������ĵ�ַ
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);//��
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//��
	printf("%p\n", &arr[0] +1);
	//�ٺ͢ڵȼ�

	printf("%p\n", &arr);//��
	printf("%p\n", &arr+1);
	//&������ȡ��������������ĵ�ַ����ͷ��
	return 0;
}

////ð�������Ż���
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