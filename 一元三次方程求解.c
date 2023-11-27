#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d); // 输入
	for (double x = -100; x <= 100; x += 0.001) {//枚举每个答案
		if (fabs(x * x * x * a + x * x * b + x * c + d) < 0.0001)//避免double精度错误
			printf("%.02lf ", x);//两位小数输出
	}
	return 0;
}