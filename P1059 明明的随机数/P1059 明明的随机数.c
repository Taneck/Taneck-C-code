#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,i;
	int count = 0;
	int arr[1111] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int temp;
		scanf("%d", &temp);
		arr[temp]++;
	}
	for (i = 0; i < 1111; i++)
	{
		if (arr[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 0; i < 1111; i++)
	{
		if (arr[i])
		{
			printf("%d ", i);
		}
	}
	return 0;
}