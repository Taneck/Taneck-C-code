#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	int count = 0;
	int sum = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum /= n;
	for (i = 0; i < n; i++)
	{
		arr[i]-=sum;
	}
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i])
		{
			count++;
			arr[i + 1] += arr[i];
		}
	}
	printf("%d", count);
	return 0;
}