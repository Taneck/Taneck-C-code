#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s[25], t[25], a[25], b[25], c[25], p[25], money[25], temperature[111];//��������Ϊ����ԭ��,temperature�������ÿ��ţ�����ڻ���Ҫ�����¶��¶�
int n, m, ans = 999999999, l = 999999999, r = -1;//l��r������ţ��ţ�������ұ߽磬���Լ���check��ʱ��
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
	dfs(dep + 1, spent_money);//��ѡ�˿յ��������Ǯ����
	use(dep);//�ô˿յ�
	dfs(dep + 1, spent_money + money[dep]);//ѡ�˿յ��������Ǯ����
	unuse(dep);//����
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d", &s[i], &t[i], &c[i]);
		l = (((l) < (s[i])) ? (l) : (s[i]));//l��r������ţ��ţ�������ұ߽磬���Լ���check��ʱ��
		r = (((r) > (t[i])) ? (r) : (t[i]));
		for (int j = s[i]; j <= t[i]; j++)
			temperature[j] += c[i];//temperature�������ÿ��ţ�����ڻ���Ҫ�����¶��¶�
	}
	for (int i = 1; i <= m; i++)
		scanf("%d %d %d %d", &a[i], &b[i], &p[i], &money[i]);
	dfs(1, 0);//�ӵ�һ�����ѣ���ʼ����ǮΪ0
	printf("%d", ans);
	return 0;
}