#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long i, n, last = 0, temp = 0, ans = 0;
	scanf("%lld", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp > last)
		{
			ans += (temp - last);
		}
		last = temp;
	}
	printf("%lld", ans);
	return 0;
}