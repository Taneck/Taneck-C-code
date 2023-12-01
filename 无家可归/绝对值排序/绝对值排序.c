#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n, t, a[105] = { 0 }, b[105] = { 0 };
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
		{
			return 0;
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			b[i] = abs(a[i]);
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (b[j] < b[j + 1])
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
					t = b[j];
					b[j] = b[j + 1];
					b[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}