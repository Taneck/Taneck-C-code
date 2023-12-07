#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, k;
	int temp_r, temp_c;
	int arr[40][40] = { 0 };
	scanf("%d", &n);
	temp_r = 1;
	temp_c = n / 2 + 1;
	arr[temp_r][temp_c] = 1;
	for (k = 2; k <= n * n; k++)
	{
		if (temp_r == 1 && temp_c != n)
		{
			temp_r = n;
			temp_c++;
			arr[temp_r][temp_c] = k;
		}
		else if (temp_r != 1 && temp_c == n)
		{
			temp_r--;
			temp_c = 1;
			arr[temp_r][temp_c] = k;
		}
		else if (temp_r == 1 && temp_c == n)
		{
			temp_r++;
			arr[temp_r][temp_c] = k;
		}
		else if (temp_r != 1 && temp_c != n)
		{
			if (arr[temp_r - 1][temp_c + 1] == 0)
			{
				temp_r--;
				temp_c++;
				arr[temp_r][temp_c] = k;
			}
			else
			{
				temp_r++;
				arr[temp_r][temp_c] = k;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}