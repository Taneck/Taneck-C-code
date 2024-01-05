#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, first_group[30001] = { 0 }, second_group[30001] = { 0 }, ans, cow_number[30001] = { 1 };
int main()
{
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &cow_number[i]);
	for (i = 1; i <= n; i++)
		if (cow_number[i] == 1)	second_group[0]++;
	ans = first_group[0] + second_group[0];
	for (i = 1; i <= n; i++)
	{
		if (cow_number[i] == 1)
		{
			first_group[i] = first_group[i - 1];
			second_group[i] = second_group[i - 1] - 1;
			if (ans > first_group[i] + second_group[i])	ans = first_group[i] + second_group[i];
		}
		else
		{
			first_group[i] = first_group[i - 1] + 1;
			second_group[i] = second_group[i - 1];
			if (ans > first_group[i] + second_group[i])	ans = first_group[i] + second_group[i];
		}
	}
	printf("%d", ans);
	return 0;
}