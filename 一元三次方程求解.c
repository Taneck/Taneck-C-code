#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d); // ����
	for (double x = -100; x <= 100; x += 0.001) {//ö��ÿ����
		if (fabs(x * x * x * a + x * x * b + x * c + d) < 0.0001)//����double���ȴ���
			printf("%.02lf ", x);//��λС�����
	}
	return 0;
}