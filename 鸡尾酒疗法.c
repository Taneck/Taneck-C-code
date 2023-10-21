#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a, b, c, d, e, f, g, h;
	int i = 0;
	int j = 0;
	int arr[10];
	scanf("%lf%lf%lf", &a, &d, &c);
	e = c / d;
	for (b = 1; b < a; b++)
	{
		scanf("%lf %lf", &f, &g);
		h = g / f;
		if (h - e > 0.05)
		{
			arr[i] = 1;
			i++;
		}
		else if (e - h > 0.05)
		{
			arr[i] = 2;
			i++;
		}
		else
		{
			arr[i] = 3;
			i++;
		}
	}
	for (j = 0; j < i; j++)
	{
		if (arr[j] == 1)
		{
			printf("better\n");
		}
		if (arr[j] == 2)
		{
			printf("worse\n");
		}
		if (arr[j] == 3)
		{
			printf("same\n");
		}
	}
	return 0;
}

int main()
{
	double a, b, c, d, e, f, g, h;
	scanf("%lf%lf%lf", &a, &d, &c);
	e = c / d;
	for (b = 1; b < a; b++)
	{
		scanf("%lf %lf", &f, &g);
		h = g / f;
		if (h - e > 0.05)
		{
			printf("better\n");
		}
		else if (e - h > 0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}