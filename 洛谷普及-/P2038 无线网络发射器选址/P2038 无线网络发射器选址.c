#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	int count = 0;
	int d, n, i, j;
	int arr[170][170] = { 0 };
	scanf("%d", &d);
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		arr[a + 20][b + 20] = c;
	}
	for (i = 20; i < 149; i++)
	{
		for (j = 20; j < 149; j++)
		{
			int p, q;
			int temp = 0;
			for (p = -d; p <= d; p++)
			{
				for (q = -d; q <= d; q++)
				{
					temp += arr[i + p][j + q];
				}
			}
			if (sum < temp)
			{
				sum = temp;
				count = 1;
			}
			else if (sum == temp)
			{
				count++;
			}
		}
	}
	printf("%d %d", count, sum);
	return 0;
}