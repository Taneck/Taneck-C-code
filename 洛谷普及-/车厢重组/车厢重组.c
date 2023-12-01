#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bubble(int arr[], int sz)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
	return count;
}
int main()
{
	int n,i;
	int arr[10000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d", bubble(arr, n));
	return 0;
}
