#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void quicksort(int arr[], int left, int right)
{
	if (left < right)
	{
		int i, j, x;
		i = left;
		j = right;
		x = arr[left];
		while (i != j)
		{
			while (i<j && arr[j]>x)
			{
				j--;
			}
			if (i < j)
			{
				arr[i] = arr[j];
				i++;
			}
			while (i < j && arr[i] < x)
			{
				i++;
			}
			if (i < j)
			{
				arr[j] = arr[i];
				j--;
			}
		}
		arr[i] = x;
		quicksort(arr, left, i - 1);
		quicksort(arr, i + 1, right);
	}
}

void load(int* value, int* amount, int n, int remain)//装载第n项及以前的礼物
{
	int count = 0;
	while (n >= 0)
	{
		if (amount[value[n]] && value[n] <= remain&&count<2)//该价值的礼物没被用完且小于等于剩余价值
		{
			amount[value[n]]--;
			remain -= value[n];
			count++;
		}
		n--;
	}
}

int main()
{
	int amount[200] = { 0 };
	int value[30001] = { 0 };
	int max, n, i, count = 0;
	scanf("%d", &max);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &value[i]);
		amount[value[i]]++;
	}
	n--;
	quicksort(value, 0, n);
	while (n >= 0)
	{
		if (amount[value[n]])
		{
			load(value, amount, n, max);
			count++;
		}
		n--;
	}
	printf("%d", count);
	return 0;
}