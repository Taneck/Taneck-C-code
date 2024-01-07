#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int judge[1111] = { 0 };//若i这个数在内存中，则judge[i]==1,用于节省遍历内存时间
int memory_queue[1111] = { 0 };
int start = 1, end = 1;
int main()
{
	int m, n, i, j, temp, memory_usage = 0, count = 0;
	scanf("%d %d", &m, &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		if (judge[temp] == 1)	continue;
		else
		{
			count++;
			if (memory_usage < m)//内存未满
			{
				memory_queue[end] = temp;
				judge[temp] = 1;
				end++;
				memory_usage++;
			}
			else
			{
				judge[memory_queue[start]] = 0;
				start++;
				memory_queue[end] = temp;
				end++;
				judge[temp] = 1;
			}
		}
	}
	printf("%d", count);
}