#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("******1.�ӷ� 2.����******\n");
	printf("******3.�˷� 4.����******\n");
	printf("******0.�˳�       ******\n");
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
	printf("�������������֣�");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);//ret = (*pf)(x, y)Ч��һ��
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	//int (*pf)(int, int) = add;//pf�Ǻ���ָ��
	//int (*arr[4])(int, int) = { add,sub,mul,div };//arr�Ǻ���ָ������,Ҳ��ת�Ʊ�
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("���˳�\n");
			break;
		default:
			printf("������1/2/3/4/0\n");
			break;
		}
	} while (input);
	return 0;
}

////qsort-����������������������͵�����
//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//			size_t num,//�����������Ԫ�ظ���
//			size_t width,//�����������Ԫ�ش�С����λ���ֽڣ�
//			int (*cmp)(const void* e1,const void* e2)//����ָ��-�ȽϺ�������Ϊÿ�����͵����ݱȽϷ�ʽ��ͬ
//			);
////

int a = 10;
void* pa = &a;//void* ���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//void* ���޾������͵�ָ�룬���Բ��ܽ����ò�����Ҳ����+-����
//�ڱȽϺ����ڲ�����void*ǿ������ת������