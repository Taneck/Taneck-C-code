#include <stdio.h>
int main()
{
	int age = 20;//����
	printf("%d\n", age);
	char name = 'K';//�ַ���������
	printf("%c\n", name);
	long num = 100;//������
	printf("%d\n", num);
	float f = 5.97;
	printf("%f\n", f);
	double d = 5.97;
	printf("%lf\n", d);

	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	int number1 = 0;
	int number2 = 0;
	int sum = 0;
	scanf_s("%d%d", &number1, &number2);//ȡ��ַ����&
	sum = number1 + number2;
	printf("sum = %d\n", sum);
	
	return 0;
}


//%d ��ӡ����
//%c ��ӡ�ַ�
//%f ��ӡ�������֣���ӡС����
//%lf ��ӡ˫���ȸ������֣���ӡС����
//%p �Ե�ַ����ʽ��ӡ
//%x ��ӡ16��������
//%o ��ӡ8��������
//......