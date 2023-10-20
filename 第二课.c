#define _CRT_SECURE_NO_WARNINGS  //需要添加安全函数
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


//字面常量 直接写数字就是字面常量
//2.const修饰的常变量。const int n = 10   n是变量，但又有常属性，所以我们说n是常变量
//3.define。 定义的标识符常量#define max 10    
//4.枚举常量。 enum

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
//	//可以写 s = male
//	//但 若此时写 male = 4 则会报错
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
//	char arr1[] = "abc";//数组
//	char arr2[] = { 'a','b','c'};
//	char arr3[] = { 'a','b','c','\0'};//"abc"='a','b','c','\0'     '\0'是字符串结束的标志   '\0'-0 'A'-65 'a'-97
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	
//	printf("%d\n", strlen(arr1));//3    strlen 计算字符串长度
//	printf("%d\n", strlen(arr2));//随机值
//	printf("%d\n", strlen(arr3));//3
//
//	return 0;
//}

////if 语句
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("学习CS");
//	printf("你要认真学习吗？（1/0）>:");
//	scanf("%d/n", &input);
//	if (input == 1)
//	printf("人生巅峰\n");
//	else
//		printf("喂猪\n");
//
//	return 0;
//}

////自定义函数
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

//数组 一组同类型元素的集合
#include <stdio.h>
int main()
{
	int arr[10];//定义一个最多存放10个元素的数组，第一个数字下标为0，依次递增
	int kk[10] = { 8,1,0,9,7,5 };
	printf("%d\n", kk[2]);//kk数组中下标为2的数字为0
	int i = 0;
	while (i < 6)
	{
		printf("%d", kk[i]);
		i++;
	}

	return 0;
}