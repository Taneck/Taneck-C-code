#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int v, g;
int need[30] = { 0 }, vitamin[20][30] = { 0 }, fed[30] = { 0 }, ans[20] = { 0 }, min_dep = 99999999, print_ans[20] = { 0 };
void feed(int num)
{
	for (int i = 1; i <= v; i++)	fed[i] += vitamin[num][i];
}
void unfeed(int num)
{
	for (int i = 1; i <= v; i++)	fed[i] -= vitamin[num][i];
}
void print(int dep)
{
	for (int i = 0; i < dep; i++)	printf("%d ", print_ans[i]);
}
void mark(int num)
{
	int i = 0;
	while (ans[i] != 0)	i++;
	ans[i] = num;
}
void unmark()
{
	int i = 19;
	while (ans[i] == 0)	i--;
	ans[i] = 0;
}
int check()//比较fed和need
{
	for (int i = 1; i <= v; i++)
		if (fed[i] < need[i])	return 0;
	return 1;
}
void copy(int* sourse, int* destination, int dep)
{
	for (int i = 0; i < dep; i++)	destination[i] = sourse[i];
}
void search(int dep, int num)
{
	if (check())//如果达到要求
	{
		if (dep < min_dep)//如果是深度较浅的更优解
		{
			min_dep = dep;//答案深度更新
			copy(ans, print_ans, min_dep);//用于打印饲料序号的答案数组更新
		}
		return;
	}
	else 
	{
		for (int i = num + 1; i <= g; i++)
		{
			mark(i);//在ans数组记录当前使用的饲料序号
			feed(i);//用第i组饲料喂，加到fed数组中
			search(dep + 1, i);//搜索更深一层
			unfeed(i);//将fed数组还原为dep层的状态，从而不影响下一次循环的fed数组
			unmark();//撤销本次循环在ans数组中的记录，从而不影响下一次循环的ans数组
		}
	}
}

int main()
{
	int i, j;
	scanf("%d", &v);
	for (i = 1; i <= v; i++)
		scanf("%d", &need[i]);
	scanf("%d", &g);
	for (j = 1; j <= g; j++)
		for (i = 1; i <= v; i++)
			scanf("%d", &vitamin[j][i]);
	search(0, 0);//初始深度为1，用第0组饲料（即没用）之后的饲料喂
	printf("%d ", min_dep);
	print(min_dep);//用print_ans数组打印饲料序号
	return 0;
}

////超时解，不知道思路对不对
//int v, g;
//int need[30] = { 0 }, vitamin[20][30] = { 0 }, fed[30] = { 0 }, ans[20] = { 0 }, min_dep = 99999999, print_ans[20] = { 0 };
//void feed(int num)
//{
//	for (int i = 1; i <= v; i++)
//		fed[i] += vitamin[num][i];
//}
//void unfeed(int num)
//{
//	for (int i = 1; i <= v; i++)
//		fed[i] -= vitamin[num][i];
//}
//void print(int dep)
//{
//	for (int i = 0; i < dep; i++)
//		printf("%d ", print_ans[i]);
//}
//void mark(int num)
//{
//	int i = 0;
//	while (ans[i] != 0)
//		i++;
//	ans[i] = num;
//}
//void unmark()
//{
//	int i = 19;
//	while (ans[i] == 0)
//		i--;
//	ans[i] = 0;
//}
//int check()//比较fed和need
//{
//	for (int i = 1; i <= v; i++)
//		if (fed[i] < need[i])
//			return 0;
//	return 1;
//}
//
//void copy(int* sourse, int* destination, int dep)
//{
//	for (int i = 0; i < dep; i++)
//		destination[i] = sourse[i];
//}
//
//void search(int dep, int num)
//{
//	for (int i = num + 1; i <= g; i++)
//	{
//		mark(i);//在ans数组记录当前使用的饲料序号
//		feed(i);//用第i组饲料喂，加到fed数组中
//		if (check())//如果达到要求
//		{
//			if (dep < min_dep)
//			{
//				min_dep = dep;
//				copy(ans, print_ans, min_dep);
//			}
//		}
//		else
//		{
//			for (int j = i ; j <= g; j++)
//			{
//				search(dep + 1, i);
//			}
//		}
//		unfeed(i);//将fed数组还原为dep层的状态，从而不影响下一次循环的fed数组
//		unmark();//撤销在ans数组的记录，从而不影响下一次循环的ans数组
//	}
//}
//
//
//int main()
//{
//	int i, j;
//	scanf("%d", &v);
//	for (i = 1; i <= v; i++)
//		scanf("%d", &need[i]);
//	scanf("%d", &g);
//	for (j = 1; j <= g; j++)
//		for (i = 1; i <= v; i++)
//			scanf("%d", &vitamin[j][i]);
//	search(1, 0);//初始深度为1，用第0组饲料（即没用）之后的饲料喂
//	printf("%d ", min_dep);
//	print(min_dep);//用print_ans数组打印饲料序号
//	return 0;
//}