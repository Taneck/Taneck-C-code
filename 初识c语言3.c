#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int max(int x, int y)
//{
//	int m = 0;
//	if (x > y)
//		m = x;
//	else
//		m = y;
//	return m;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = max(a, b);
//	printf("�ϴ�ֵΪ��%d", c);
//	return 0;
//}

//����������
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = (a > b ? a : b);
//	printf("�ϴ�ֵΪ��%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n, i, a;
//    long long ch[999];
//    scanf("%d", &n);
//    ch[0] = n;
//    i = 1;
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//            ch[i] = n;
//            i++;
//        }
//        else
//        {
//            n = 3 * n + 1;
//            ch[i] = n;
//            i++;
//        }
//    }
//    i--;
//    a = 0;
//    while (a <= i)
//    {
//        printf("%d ", ch[a]);
//        a++;
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
	int a = 10;//�ĸ��ֽ�
	//��һ�ֱ�����������ŵ�ַ��-ָ�����
	int* p = &a;//ȡ��ַ
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//�����ò�����
	printf("%d\n", a);

	char ch = 'a';
	char* pch = &ch;
	*pch = 'b';
	printf("%c\n", ch);



	return 0;
}