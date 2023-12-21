#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char name[100001][15] = { 0 };
int io_status[100001] = { 0 };
int main()
{	
	int i, j, m, n,ans_number=1;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		scanf("%d %s", &io_status[i], name[i]);
	for (i = 1; i <= m; i++)
	{
		int direction, step, flag;
		scanf("%d %d", &direction, &step);
		if (direction == io_status[ans_number]) flag = -1;
		if (direction != io_status[ans_number]) flag = 1;
		ans_number += flag*step;
		if (ans_number == -n) ans_number == n;
		if (ans_number <=0&& ans_number >-n ) ans_number +=n;
		if (ans_number < -n)
		{
			ans_number = -ans_number - n;
			ans_number %= n;
			ans_number = n- ans_number;
		}
		if(ans_number>n) ans_number %= n;
		//for (j = 1; j <= step; j++)//ÕâÑù³¬Ê±
		//{
		//	ans_number += flag;
		//	if (ans_number == 0) ans_number = n;
		//	if (ans_number == n+1) ans_number = 1;
		//}
	}
	printf("%s", name[ans_number]);
	return 0;
}