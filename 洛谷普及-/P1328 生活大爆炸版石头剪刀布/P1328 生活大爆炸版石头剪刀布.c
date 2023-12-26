#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int result[5][5];
	result[0][0] = 0;
	result[0][1] = -1;
	result[0][2] = 1;
	result[0][3] = 1;
	result[0][4] = -1;
	result[1][0] = 1;
	result[1][1] = 0;
	result[1][2] = -1;
	result[1][3] = 1;
	result[1][4] = -1;
	result[2][0] = -1;
	result[2][1] = 1;
	result[2][2] = 0;
	result[2][3] = -1;
	result[2][4] = 1;
	result[3][0] = -1;
	result[3][1] = -1;
	result[3][2] = 1;
	result[3][3] = 0;
	result[3][4] = 1;
	result[4][0] = 1;
	result[4][1] = 1;
	result[4][2] = -1;
	result[4][3] = -1;
	result[4][4] = 0;
	int n, na, nb, arr[300] = { 0 }, brr[300] = { 0 }, count_a = 0, count_b = 0, i, j, ans_a = 0,ans_b=0;
	scanf("%d %d %d", &n, &na, &nb);
	for (i = 0; i < na; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < nb; i++)
		scanf("%d", &brr[i]);
	for (i = 0; i < n; i++)
	{
		if (result[arr[count_a]][brr[count_b]] == 1)	ans_a++;
		if (result[arr[count_a]][brr[count_b]] == -1)	ans_b++;
		count_a++;
		count_b++;
		if (count_a == na) count_a = 0;
		if (count_b == nb) count_b = 0;
	}
	printf("%d %d", ans_a, ans_b);
	return 0;
}