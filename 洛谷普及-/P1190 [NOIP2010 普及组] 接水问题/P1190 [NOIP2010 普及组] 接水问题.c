#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stu[11111] = { 0 }, tap[111] = { 0 };
int main()
{
	int i, j, n, m,time=0,count=0;
	scanf("%d %d", &n, &m);
	int next = m + 1;
	for (i = 1; i <= n; i++)
		scanf("%d", &stu[i]);
	while (count < n)//count记录已打完水的学生数量
	{
		for (i = 1; i <= m; i++)//该for循环代表m个水龙头滴1s
		{
			tap[i]++;
			if (tap[i] == stu[i])
			{
				tap[i] = 0;
				stu[i] = stu[next];
				next++;
				count++;
			}
		}
		time++;
	}
	printf("%d", time);
	return 0;
}