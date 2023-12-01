#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[7] = { 0 };
	int count = 0;
	scanf("%d %d %d %d %d", &a[1], &a[2], &a[3], &a[4], &a[5]);
	for (int i = 1; i <= 5; i++)
	{
		a[5] += a[0];
		a[0] = 0;
		a[1] += a[6];
		a[6] = 0;
		count += a[i] % 3;
		a[i - 1] += a[i] / 3;
		a[i + 1] += a[i] / 3;
		a[i] = a[i] / 3;
	}
	a[5] += a[0];
	a[0] = 0;
	a[1] += a[6];
	a[6] = 0;
	printf("%d %d %d %d %d\n", a[1], a[2], a[3], a[4], a[5]);
	printf("%d", count);
	return 0;
}