#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int a = 1;
	int b = 2;
	int x = a;
	int y = b;
	int i;
	int flag = 1;
	scanf("%d", &n);
	if (1 == n)
	{
		printf("1/1");
	}
	if (n > 1)
	{
		for (i = 0; i < n - 2; i++)
		{
			if (a == y && b == x)
			{
				flag *= (-1);
				if (a > b)
				{
					a++;
				}
				if (a < b)
				{
					b++;
				}
				x = a;
				y = b;
				continue;
			}
			a += flag;
			b -= flag;
		}
	}
	printf("%d/%d", a, b);
	return 0;
}