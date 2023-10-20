#include <stdio.h>
int main()
{
	int age = 20;//整形
	printf("%d\n", age);
	char name = 'K';//字符数据类型
	printf("%c\n", name);
	long num = 100;//长整型
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
	scanf_s("%d%d", &number1, &number2);//取地址符号&
	sum = number1 + number2;
	printf("sum = %d\n", sum);
	
	return 0;
}


//%d 打印整形
//%c 打印字符
//%f 打印浮点数字（打印小数）
//%lf 打印双精度浮点数字（打印小数）
//%p 以地址的形式打印
//%x 打印16进制数字
//%o 打印8进制数字
//......