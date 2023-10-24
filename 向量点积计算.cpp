#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int a[1000];
	int b[1000];
	int s=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		s += a[i] * b[i];
	}
	printf("%d", s);
	return 0;
}