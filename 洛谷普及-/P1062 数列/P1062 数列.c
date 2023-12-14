#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int k, n,i,j;
	long long ans = 0;
	int arr[1111] = { 0 };
	i = 0;
	scanf("%d %d", &k, &n);
	while (n)
	{
		arr[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		ans += pow(k, j) * arr[j];
	}
	printf("%lld", ans);
	return 0;
}