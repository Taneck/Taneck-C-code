#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')//������뻺����
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȡ��ȷ��\n");
//	}
//	return 0;
//}

////1!+2!+3!���Ż��㷨
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//���ֲ���
int main()
{
	int mid,k;
	int a[] = { 0,1,2,3,4,5,7,8,9 };
	int left = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	scanf("%d", &k);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

//#include <string.h>
//����strlen()   �Ƚ��ַ���strcmp(����,����)��ǰ���򷵻ش���0�����֣�ǰС��С��0����ͬ��0
//#include <Windows.h>
//sleep(1000)//�Ժ���Ϊ��λ��1s
//#include <stdlib.h>
//system("cls")//ִ��ϵͳ�����һ������-cls-�����Ļ
