#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int compare(const void* x, const void* y)
{
	return *((int*)x) - *((int*)y);
}
int main()
{
	int n, arr[111] = { 0 }, i, j, k, count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, 4, compare);
	for (i = 2; i < n; i++)
	{
		for (j = 0; j <= i - 2; j++)
		{
			for (k = j + 1; k <= i - 1; k++)
			{
				if (arr[i] == arr[j] + arr[k])
				{
					count++;
					goto next;
				}
			}
		}
	next:
		;
	}
	printf("%d", count);
	return 0;
}