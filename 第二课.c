#define _CRT_SECURE_NO_WARNINGS  //��Ҫ��Ӱ�ȫ����
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1,  &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//���泣�� ֱ��д���־������泣��
//2.const���εĳ�������const int n = 10   n�Ǳ����������г����ԣ���������˵n�ǳ�����
//3.define�� ����ı�ʶ������#define max 10    
//4.ö�ٳ����� enum

//#include <stdio.h>
//int main()
//{
//	enum sex
//	{
//		male,
//		female,
//		secret,
//	};
//	enum sex s = female;
//	printf("%d\n", s);
//	
//	//����д s = male
//	//�� ����ʱд male = 4 ��ᱨ��
//
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
// }
//
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";//����
//	char arr2[] = { 'a','b','c'};
//	char arr3[] = { 'a','b','c','\0'};//"abc"='a','b','c','\0'     '\0'���ַ��������ı�־   '\0'-0 'A'-65 'a'-97
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	
//	printf("%d\n", strlen(arr1));//3    strlen �����ַ�������
//	printf("%d\n", strlen(arr2));//���ֵ
//	printf("%d\n", strlen(arr3));//3
//
//	return 0;
//}

////if ���
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("ѧϰCS");
//	printf("��Ҫ����ѧϰ�𣿣�1/0��>:");
//	scanf("%d/n", &input);
//	if (input == 1)
//	printf("�����۷�\n");
//	else
//		printf("ι��\n");
//
//	return 0;
//}

////�Զ��庯��
//#include <stdio.h>
//
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int sum = 0;
//	int a = 1;
//	int s = 2;
//	sum = add(a, s);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//���� һ��ͬ����Ԫ�صļ���
#include <stdio.h>
int main()
{
	int arr[10];//����һ�������10��Ԫ�ص����飬��һ�������±�Ϊ0�����ε���
	int kk[10] = { 8,1,0,9,7,5 };
	printf("%d\n", kk[2]);//kk�������±�Ϊ2������Ϊ0
	int i = 0;
	while (i < 6)
	{
		printf("%d", kk[i]);
		i++;
	}

	return 0;
}