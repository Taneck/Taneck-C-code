#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
struct Cow
{
	int x, y;
}Cows[100001];
int cmp(const void* x, const void* y)
{
	return (*(struct Cow*)x).y - (*(struct Cow*)y).y;
}
int main()
{
	int ans = 0, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d %d", &Cows[i].x, &Cows[i].y);
	qsort(Cows, n, sizeof(Cows[0]), cmp);
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int t = min(Cows[l].x, Cows[r].x);
		ans = max(ans, Cows[l].y + Cows[r].y);
		Cows[l].x -= t, Cows[r].x -= t;
		if (Cows[l].x <= 0) l++;
		if (Cows[r].x <= 0) r--;
	}
	printf("%d", ans);
	return 0;
}