#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//判断是否在之前某个地毯上
int f(int x, int y, int m, int n, int wx, int wy)//输入的横纵坐标，之前某个地毯的横纵坐标，地毯横向长度，地毯纵向长度
{
	if (x >= m && x <= (m + wx) && y >= n && y <= (n + wy))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n, i, j, k, x, y, answer;
	k = 0;
	answer = -1;
	int arr[40000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[k]);
			k++;
		}
	}
	scanf("%d %d", &x, &y);
	for (i = 0; i < n; i++)
	{
		if (f(x, y, arr[i * 4], arr[i * 4 + 1], arr[i * 4 + 2], arr[i * 4 + 3]))
		{
			answer = i + 1;
		}
	}
	printf("%d\n", answer);
	return 0;
}