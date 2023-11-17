#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check(int arr[], int n, int i)
{
	int m;
	for (m = 0; m < 9; m++)
	{
		if (n == arr[m])
		{
			return 0;
		}
	}
	arr[i] = n;
	return 1;
}
int main()
{
	int arr[9] = { 0 };
	int a, b, c, d, e, f, g, h, i, x, y, z;
	int m,n;
	for (a = 1; a < 4; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 1; c < 10; c++)
			{
				for (n = 0; n < 9; n++)
				{
					arr[n] = 0;
				}
				m = 0;
				//if (a == c || a == c || b == c)
				//{
				//	continue;
				//}
				x = a * 100 + b * 10 + c;
				if (x > 333)
				{
					continue;
				}
				y = 2 * x;
				z = 3 * x;
				if (check(arr, a, m) == 0)
				{
					continue;
				}
				m++;
				if (check(arr, b, m) == 0)
				{
					continue;
				}
				m++;
				if (check(arr, c, m) == 0)
				{
					continue;
				}
				m++;
				d = y / 100;
				if (check(arr, d, m) == 0)
				{
					continue;
				}
				m++;
				e = (y / 10) % 10;
				if (check(arr, e, m) == 0)
				{
					continue;
				}
				m++;
				f = y % 10;
				if (check(arr, f, m) == 0)
				{
					continue;
				}
				m++;
				g = z / 100;
				if (check(arr, g, m) == 0)
				{
					continue;
				}
				m++;
				h = (z / 10) % 10;
				if (check(arr, h, m) == 0)
				{
					continue;
				}
				m++;
				i = z % 10;
				if (check(arr, i, m) == 0)
				{
					continue;
				}
				m++;
				printf("%d %d %d\n", x, y, z);
			}
		}
	}
	return 0;
}