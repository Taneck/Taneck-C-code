#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct event
{
	int start;
	int duration;
	int end;
}events[10001];
int compare(const void* a, const void* b)
{
	return ((struct event*)a)->end - ((struct event*)b)->end;
}

int main()//Ì°ÐÄ
{
	int i, n, ans = 0, time = 0;;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &events[i].start, &events[i].duration);
		events[i].end = events[i].start + events[i].duration;
	}
	qsort(events, n, sizeof(events[0]), compare);
	for (i = 0; i < n; i++)
	{
		if (events[i].start >= time)
		{
			ans++;
			time = events[i].end;
		}
	}
	printf("%d", ans);
	return 0;
}