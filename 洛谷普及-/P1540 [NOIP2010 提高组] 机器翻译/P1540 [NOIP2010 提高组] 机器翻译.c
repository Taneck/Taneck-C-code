#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int judge[1111] = { 0 };//��i��������ڴ��У���judge[i]==1,���ڽ�ʡ�����ڴ�ʱ��
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
			if (memory_usage < m)//�ڴ�δ��
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