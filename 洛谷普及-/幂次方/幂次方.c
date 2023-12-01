#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int myprint(int x)
{
	int j;
	int temp;
	int i = 0;
	int m;
	int arr[20] = { 0 };
	int next;
	temp = x;
	do
	{
		arr[i] = log2(temp);
		temp -= pow(2, arr[i]);
		i++;
	} while (temp);
	for (j = 0; j < i; j++)
	{
		switch (arr[j])
		{
		default:
			if (j != i - 1)
			{
				printf("2(");
				next = arr[j];
				myprint(next);
				printf(")+");
			}
			else
			{
				printf("2(");
				next = arr[j];
				myprint(next);
				printf(")");
			}
			break;
		case 1:
			if (j != i - 1)
			{
				printf("2+");
			}
			else
			{
				printf("2");
			}
			break;
		case 0:
			if (j != i - 1)
			{
				printf("2(0)+");
			}
			else
			{
				printf("2(0)");
			}
			break;
		}
	}
	return 0;
}
int main()
{
	int x;
	scanf("%d", &x);
	myprint(x);
	return 0;
}