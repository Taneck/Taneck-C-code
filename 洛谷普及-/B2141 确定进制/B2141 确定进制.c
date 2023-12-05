#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>
long long transform_to_decimalism(long long x, long long b)
{
	long long ans = 0, i = 0;
	while (x)
	{
		ans += (x % 10) * (int)pow(b, i);
		i++;
		x /= 10;
	}
	return ans;
}
long long probable_radix(long long x)
{
	long long max = 0;
	while (x)
	{
		if (x % 10 > max)
		{
			max = x % 10;
		}
		x /= 10;
		if (max == 9)
		{
			break;
		}
	}
	return max + 1;
}
long long find_max(long long a, long long b, long long c)
{
	long long t;
	t = a > b ? a : b;
	t = t > c ? t : c;
	return t;
}
int main()
{
	long long p, q, r;
	long long max;
	scanf("%lld %lld %lld", &p, &q, &r);
	max = find_max(probable_radix(p), probable_radix(q), probable_radix(r));
	for (long long i = max; i <= 16; i++)
	{
		if (transform_to_decimalism(p, i) * transform_to_decimalism(q, i) == transform_to_decimalism(r, i))
		{
			printf("%lld", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}