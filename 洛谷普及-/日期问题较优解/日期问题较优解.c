#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int runnian(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int a, b, c, y, d, m;
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d/%d/%d", &a, &b, &c);
	for (y = 1960; y <= 2059; y++)
	{
		if (runnian(y) == 1)
			month[2] = 29;
		for (m = 1; m <= 12; m++)
		{
			for (d = 1; d <= month[m]; d++)
			{
				if ((a == y % 100 && b == m && c == d) || (a == m && b == d && c == y % 100) ||
					(a == d && b == m && c == y % 100))
					printf("%d-%02d-%02d\n", y, m, d);
			}
		}
	}
	return 0;
}