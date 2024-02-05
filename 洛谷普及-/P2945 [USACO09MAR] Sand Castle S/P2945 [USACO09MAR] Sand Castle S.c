#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int n, x, y;
int a[100010], b[100010];
long long ans;
int compare(void* m,void* n)
{
	return *((int*)m) - *((int*)n);
}
int main()
{
	scanf("%d %d %d", &n, &x, &y);
	for (int i = 1; i <= n; i++)  scanf("%d %d", &a[i], &b[i]);
	qsort(a + 1, n, 4, compare);
	qsort(b + 1, n, 4, compare);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < b[i])  ans += (b[i] - a[i]) * x;
		else  ans += (a[i] - b[i]) * y;
	}
	printf("%d", ans);
	return 0;
}