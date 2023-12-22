#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int arr[500] = { 0 };
int compare(int* a, int* b)
{
	return *a - *b;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		arr[i] = (a + b + c) * 1000000 + a * 1000 + (n-i);
	}
	qsort(arr, n, 4, compare);
	for (i = 0; i < 5; i++)
	{
		int temp = arr[n-1 - i];
		printf("%d %d\n", n+1-(temp % 1000),temp / 1000000);
	}
	return 0;
}