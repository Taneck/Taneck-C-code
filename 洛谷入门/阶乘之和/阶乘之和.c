#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	unsigned long long ret = 1;
	unsigned long long sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}