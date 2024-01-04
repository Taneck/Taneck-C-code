#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int arr[100000] = { 0 };
int n;
int check(int x)
{
	int i, count = 0;
	for (i = 0; i <n; i++)
	{
		if (arr[i] >= x) count++;
		if (count == x) return 1;
	}
	return 0;
}

int compare(const void* a, const void* b)
{
	return -((*(int*)a) - (*(int*)b));
}
int main()
{
	int i, j, k, l = -1, r = 100000, mid, ans=0;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, 4, compare);
	//for (i = 0; i < k; i++)
	//	arr[n + i] = arr[n - 1 - i];
	//qsort(arr, n + k, 4, compare);
	while (l <= r)
	{
		mid = (r + l) / 2;
		if (check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}

	while (k > 0 && ans >= 0)
	{
		arr[ans]++;
		ans--;
		k--;
	}
	l = -1;
	r = 100000;
	ans = 0;
	while (l <= r)
	{
		mid = (r - l) / 2 + l;
		if (check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	printf("%d", ans);
	return 0;
}