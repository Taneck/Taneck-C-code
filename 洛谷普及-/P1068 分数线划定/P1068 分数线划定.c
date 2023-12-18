#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number[5010] = { 0 };
int score[5010] = { 0 };
void bubble1(int arr[],int brr[], int sz)
{
	int i = 0;
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
				temp = brr[j];
				brr[j] = brr[j + 1];
				brr[j + 1] = temp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
void bubble2(int arr[], int brr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (brr[j] < brr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				temp = brr[j];
				brr[j] = brr[j + 1];
				brr[j + 1] = temp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
int main()
{
	int i,j, n, m;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &number[i], &score[i]);
	}
	bubble1(number,score, n);
	bubble2(number,score, n);
	for (i = 0; i < (int)(m * 1.5); i++)
	{
		//printf("%d %d", number[i], score[i]);
	}
	while (score[i] == score[i - 1])
	{
		//printf("%d %d", number[i], score[i]);
		i++;
	}
	printf("%d %d\n", score[i-1], i);
	for (j = 0; j < i; j++)
	{
		printf("%d %d\n", number[j], score[j]);
	}
	return 0;
}