#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
long long gcd(long long x, long long y)
{
	if (y == 0)	return x;
	return gcd(y, x % y);
}

int main()
{	
	long long n, m,sum,i,ans=0;
	scanf("%lld %lld", &m, &n);
	sum = m * n;
	if (m == n) ans--;
	for (i = 1; i <= (long long)sqrt(sum); i++)
	{
		if (sum % i == 0 && gcd(i, sum / i) == m)	ans += 2;
	}
	printf("%lld", ans);
	return 0;
}