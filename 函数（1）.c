#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

////strcpy����
//int main()
//{
//	char a1[] = "bit";
//	char a2[20] = "#########";
//	strcpy(a2, a1);
//	printf("%s\n", a2);
//	return 0;
//}

////memset����
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

////�޷���ֵ�ĺ���,������ֵ
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸��ǲ���ı�ʵ�ε�
////�βκ�ʵ�����ֿ�����ͬ
//void swap(int* pa,int*pb)//�����ַ
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

////�ú���ʵ�ֶ��ֲ���
////                 ������arr�Ǹ�ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)//�ȺŲ���ȥ��������
//	{
//		//��һ��һ��ʼд���ˣ�������ע�⣡������midҪд��ѭ����
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
//	//                     ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n",ret);
//	}
//	return 0;
//}

////����һ�κ�����������һ
//void add(int* pnum)
//{
//	(*pnum)++;//++���ȼ��ϸ�
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

//������ʽ����
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf��ӡ43��ͬʱ������ֵΪ�ַ���
	return 0;
}

//���������������壬����
// .h�ļ��ڷŵ��Ǻ��������� ��int add(int x, int y)���� int(int, int)
// �����Լ���ͷ�ļ���"",��  #include "add.h"
// .c�ļ��ڷŵ��Ǻ����Ķ��� 
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}