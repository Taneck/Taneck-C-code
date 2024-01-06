#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int bag[55555] = { 0 };
int grass[55555] = { 0 };
int main()
{
	int c, h, i, j;
	scanf("%d %d", &c, &h);
	for (i = 1; i <= h; i++) scanf("%d", &grass[i]);
	for (i = 1; i <= h; i++)
	{
		for (j = c; j >= grass[i]; j--)	bag[j] = (((bag[j]) > (bag[j - grass[i]] + grass[i])) ? (bag[j]) : (bag[j - grass[i]] + grass[i]));
		if (bag[c] == c)	break;
	}
	printf("%d", bag[c]);
	return 0;
}