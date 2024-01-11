#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s[25], t[25], a[25], b[25], c[25], p[25], money[25], temperature[111];//数组名均为题中原意,temperature数组代表每个牛栏现在还需要降的温度温度
int n, m, ans = 999999999, l = 999999999, r = -1;//l和r代表有牛的牛栏的左右边界，可以减少check的时间
int check()
{
	for (int i = l; i <= r; i++)
		if (temperature[i] > 0)	return 0;
	return 1;
}
void use(int dep)
{
	for (int i = a[dep]; i <= b[dep]; i++)	temperature[i] -= p[dep];
}
void unuse(int dep)
{
	for (int i = a[dep]; i <= b[dep]; i++)	temperature[i] += p[dep];
}

void dfs(int dep, int spent_money)
{
	if (dep > m)
	{
		if (check())	ans = (((spent_money) < (ans)) ? (spent_money) : (ans));
		return;
	}
	dfs(dep + 1, spent_money);//不选此空调的情况，钱不加
	use(dep);//用此空调
	dfs(dep + 1, spent_money + money[dep]);//选此空调的情况，钱加上
	unuse(dep);//回溯
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d", &s[i], &t[i], &c[i]);
		l = (((l) < (s[i])) ? (l) : (s[i]));//l和r代表有牛的牛栏的左右边界，可以减少check的时间
		r = (((r) > (t[i])) ? (r) : (t[i]));
		for (int j = s[i]; j <= t[i]; j++)
			temperature[j] += c[i];//temperature数组代表每个牛栏现在还需要降的温度温度
	}
	for (int i = 1; i <= m; i++)
		scanf("%d %d %d %d", &a[i], &b[i], &p[i], &money[i]);
	dfs(1, 0);//从第一层深搜，初始花的钱为0
	printf("%d", ans);
	return 0;
}