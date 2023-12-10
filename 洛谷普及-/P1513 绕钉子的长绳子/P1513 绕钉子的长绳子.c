#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	double r;
	double sum = 0;
	double arr[111][2] = { 0 };
	scanf("%d %lf", &n, &r);
	for (i = 0; i < n; i++)
	{
		double temp_x;
		double temp_y;
		scanf("%lf %lf", &temp_x, &temp_y);
		arr[i][0] = temp_x;
		arr[i][1] = temp_y;
	}
	arr[n][0] = arr[0][0];
	arr[n][1] = arr[0][1];//便于最后一点与第一点联结
	for (i = 0; i < n; i++)
	{
		double temp_x = arr[i][0] - arr[i + 1][0];
		double temp_y = arr[i][1] - arr[i + 1][1];
		sum += pow(temp_x * temp_x + temp_y * temp_y, 0.5);
	}
	sum += 2 * 3.1415926 * r;
	printf("%.2lf", sum);
	return 0;
}