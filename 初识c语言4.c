#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 12;
//	double b = 123.12345678;
//	double c = 12345678.1234567;
//	char d = 'p';
//	printf("a=%d,%5d,%x\n", a, a, a);
//	printf("b=%f,%lf,%5.4lf\n", b, b, b);
//	printf("c=%f,%8.4lf\n", c, c);
//	printf("d=%c,%6c\n", d, d);
//
//	return 0;
//}

////鸡兔同笼
//int main()
//{
//	int j=0, i=0;
//	int m, n;
//	int z = 0;
//
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		z = 0;
//		for (i = 0; i <= m; i++)
//		{
//			for (j = 0; j <= m; j++)
//			{
//				if (m == i + j && (2 * i + 4 * j) == n)
//				{
//					printf("鸡%d 兔%d\n", i, j);
//					z = 1;
//				}
//			}
//		}
//		if ( z == 0)
//		{
//			printf("-1 -1");
//		}
//	}
//	/*m = 1;
//	n = 4;
//	i = 0;
//	j = 1;
//	if (m = i + j && (2 * i + 4 * j) == n)
//	{
//		printf("鸡：%d，兔：%d\n", i, j);
//	}*/
//	return 0;
//}


////创建一个结构体类型
//struct book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型，创建一个该类型的结构体变量
//	struct book b1 = { "c语言程序设计",55 };
//	printf("书名：《%s》\n", b1.name);
//	printf("原价为：%d元\n", b1.price);
//	b1.price = 15;
//	printf("促销价为：%d元\n", b1.price);
//
//
//	struct book* pb = &b1;
//
//	//. 用到的是结构体变量，来找到成员
//	printf("书名：《%s》\n", (*pb).name);
//	printf("促销价为：%d元\n", (*pb).price);
//	//-> 用到的是结构体指针 来找到成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//
//	return 0;
//}

//int main()
//{
//	int n,m,t;
//	scanf("%d", &n);
//	t = 0;
//	while (n >= 1)
//	{
//		m = n%10;
//		if (m % 2 == 0)
//		{
//			t = t * 10 + m;
//			m = 1;
//		}
//		n /= 10;
//	}
//	printf("%d\n", t);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d%d\n", &x, &y);
//	int n = x + y;
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcded";
//	printf("%d\n", strlen(arr1));
//	int len = strlen("abcdef");
//	printf("%s\n",arr1);
//	return 0;
//}

//int main()
//{
//	int n;
//	int num, m = 0, a[100], i = 0, k = 0;
//	scanf("%d", &n);
//	while (scanf("%d", &num) != EOF)
//	{
//		while (num / 8 != 0)
//		{
//			m = num % 8;
//			num /= 8;
//			a[i] = m;
//			i++;
//			k++;
//		}
//		a[k] = num;
//		for (int i = k; i >= 0; i--)
//		{
//			printf("%d", a[i]);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0, num = 0, m = 0, a[10], b[10], i = 0, k = 0, z = 0;
//	scanf("%d", &n);
//	while (z < n)
//	{
//		num = 0;
//		scanf("%d", &num);
//		a[z] = num;
//		z++;
//	}
//	z = 0;
//	while (z < n)
//	{
//		i = 0;
//		k = 0;
//		while (a[z] / 8 != 0)
//		{
//			m = a[z] % 8;
//			a[z] /= 8;
//			b[i] = m;
//			i++;
//			k++;
//		}
//		b[k] = a[z];
//		for (int i = k; i >= 0; i--)
//		{
//			printf("%d", b[i]);
//
//		}
//		printf("\n");
//		z++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	if (n > 7)
//	{
//		printf("1");
//	}
//	else
//	{
//		if (n < 7)
//		{
//			printf("2");
//		}
//		else 
//		{
//			printf("3");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a,b,c;
//	scanf("%d/%d/%d", &a,&b,&c);
//	printf("%d\n%d\n%d\n", a,b,c);
//	return 0;
//}
