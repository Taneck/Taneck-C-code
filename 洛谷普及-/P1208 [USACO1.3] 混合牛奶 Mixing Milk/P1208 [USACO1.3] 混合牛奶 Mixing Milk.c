#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
struct cow
{
	int price;
	int amount;
}arr[5009];

int my_cmp(const void* x, const void* y)
{
	return ((struct cow*)x)->price - ((struct cow*)y)->price;
}

int main()
{
	int n, m, i, j, cost = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &arr[i].price, &arr[i].amount);
	}
	qsort(arr, m, 8, my_cmp);
	i = 0;
	while (n)
	{
		if (n >= arr[i].amount)
		{
			n -= arr[i].amount;
			cost += arr[i].price * arr[i].amount;
			i++;
		}
		else
		{
			cost += arr[i].price * n;
			n = 0;
			i++;
		}
	}
	printf("%d", cost);
	return 0;
}