#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long arr[100001];
int main()
{
	int n, i, j, m, p1, p2=1;
	long long sum1 = 0, sum2 = 0, gap;
	long long s1, s2;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%lld", &arr[i]);
	scanf("%d %d %lld %lld", &m, &p1, &s1, &s2);
	arr[p1] += s1;
	for (i = 1; i < m; i++)
		sum1 += arr[i] * (m - i);
	for (i = m + 1; i <= n; i++)
		sum2 += arr[i] * (i - m);
	if (sum1 == sum2)
	{
		printf("%d", m);
		return 0;
	}
	i = 1;
	gap = ((sum1 + s2 * (m - i)) > (sum2)) ? ((sum1 + s2 * (m - i)) - (sum2)) : ((sum2)-(sum1 + s2 * (m - i)));
	for (i = 2; i <= m; i++)
	{
		long long new = ((sum1 + s2 * (m - i)) > (sum2)) ? ((sum1 + s2 * (m - i)) - (sum2)) : ((sum2)-(sum1 + s2 * (m - i)));
		if (new < gap)
		{
			gap = new;
			p2 = i;
		}
	}
	for (i = m + 1; i <= n; i++)
	{
		long long new = ((sum2 + s2 * (i-m)) > (sum1)) ? ((sum2 + s2 * (i - m)) - (sum1)) : ((sum1)-(sum2 + s2 * (i - m)));
		if (new < gap)
		{
			gap = new;
			p2 = i;
		}
	}
	printf("%d", p2);
	return 0;
}