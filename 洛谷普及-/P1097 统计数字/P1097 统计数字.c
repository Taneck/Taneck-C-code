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

int main()
{
	int arr[200000], n, i, count = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	quicksort(arr, 0, n - 1);
	printf("%d ", arr[0]);
	for (i = 1; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			count++;
		}
		else
		{
			printf("%d\n%d ", count, arr[i]);
			count = 1;
		}

	}
	printf("%d", count);
	return 0;
}