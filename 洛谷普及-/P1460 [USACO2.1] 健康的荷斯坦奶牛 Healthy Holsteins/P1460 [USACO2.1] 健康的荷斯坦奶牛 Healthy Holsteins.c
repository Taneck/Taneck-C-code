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
int check()//�Ƚ�fed��need
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
	if (check())//����ﵽҪ��
	{
		if (dep < min_dep)//�������Ƚ�ǳ�ĸ��Ž�
		{
			min_dep = dep;//����ȸ���
			copy(ans, print_ans, min_dep);//���ڴ�ӡ������ŵĴ��������
		}
		return;
	}
	else 
	{
		for (int i = num + 1; i <= g; i++)
		{
			mark(i);//��ans�����¼��ǰʹ�õ��������
			feed(i);//�õ�i������ι���ӵ�fed������
			search(dep + 1, i);//��������һ��
			unfeed(i);//��fed���黹ԭΪdep���״̬���Ӷ���Ӱ����һ��ѭ����fed����
			unmark();//��������ѭ����ans�����еļ�¼���Ӷ���Ӱ����һ��ѭ����ans����
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
	search(0, 0);//��ʼ���Ϊ1���õ�0�����ϣ���û�ã�֮�������ι
	printf("%d ", min_dep);
	print(min_dep);//��print_ans�����ӡ�������
	return 0;
}

////��ʱ�⣬��֪��˼·�Բ���
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
//int check()//�Ƚ�fed��need
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
//		mark(i);//��ans�����¼��ǰʹ�õ��������
//		feed(i);//�õ�i������ι���ӵ�fed������
//		if (check())//����ﵽҪ��
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
//		unfeed(i);//��fed���黹ԭΪdep���״̬���Ӷ���Ӱ����һ��ѭ����fed����
//		unmark();//������ans����ļ�¼���Ӷ���Ӱ����һ��ѭ����ans����
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
//	search(1, 0);//��ʼ���Ϊ1���õ�0�����ϣ���û�ã�֮�������ι
//	printf("%d ", min_dep);
//	print(min_dep);//��print_ans�����ӡ�������
//	return 0;
//}