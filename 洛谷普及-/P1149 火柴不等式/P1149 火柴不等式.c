#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_match(int n, int* num)
{
	int count = 0;
	do
	{
		count += (*(num + n % 10));
		n /= 10;
	} while (n);
	return count;
}
int main()
{
	int n, i, j, count = 0;
	int num[10] = { 6,2,5,5,4,5,6,3,7,6 };
	scanf("%d", &n);
	n -= 4;
	for (i = 0; i <= 1111; i++)
	{
		for (j = 0; j <= 1111; j++)
		{
			if (count_match(i, num) + count_match(j, num) + count_match(i + j, num) == n)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}