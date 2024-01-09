#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
int map[40000][20] = { 0 };//��ֱ�Ӽ�¼��map��
int check_end[20] = { 0 };//���ڼ��ĳdep����Ƿ�ȫΪ0�ĸ�������
int used_map[40000] = { 0 };//��¼�Ƿ��ù�
int n;
void print()//��ӡ�𰸺���
{
	for (int i = 0; i <= pow(2, n); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 0)	printf("O");
			if (map[i][j] == 1)	printf("X");
		}
		printf("\n");
	}
}
void reverse(int k, int dep)//��dep�е�i����ת��Ľ�����Ƶ�dep+1��
{
	for (int i = 0; i < n; i++)
	{
		if (i != k)	map[dep + 1][i] = map[dep][i];
		else
		{
			if (map[dep][i] == 1)	map[dep + 1][i] = 0;
			if (map[dep][i] == 0)	map[dep + 1][i] = 1;
		}
	}
}
void unreverse(int dep)//��ԭĳ��Ϊȫ0������δʹ�ù���һdep
{
	memset(map[dep], 0, n * 4);
}

int calc(int dep)//��map��dep�е�����1 / 0���������ƣ�ת��Ϊʮ����, ������λȨ�𽥱��
{
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		ret += map[dep][i] * pow(2, i);
	}
	return ret;
}
void mark(int dep)//��used_map�м�¼��01�������ʮ�����Ƿ��ù�
{
	used_map[calc(dep)] = 1;
}
void unmark(int dep)//������¼
{
	used_map[calc(dep)] = 0;
}


int check_map(int dep)//�������Ƿ��ù�
{
	int ret = calc(dep);//��mapһ�е�����1/0���������ƣ�ת��Ϊʮ����,������λȨ�𽥱��
	if (used_map[ret] == 1)	return 1;//���ù�
	else return 0;
}

void dfs(int dep)
{
	if (dep > 1 && memcmp(map[dep], check_end, n * 4) == 0)//��Ϊ��ʼ״̬��
	{
		if (dep == pow(2, n))//������Ҳ��ȷ�����ѵ���
		{
			print();
			return;//ֱ�ӽ�������
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			reverse(i, dep);//��ת��i��,����¼��dep+1��map��
			if (check_map(dep + 1))//������д�dep+1��map״̬
			{
				unreverse(dep + 1);//��ԭ�����reverse����
				continue;//ֱ����һ�ֿ���
			}
			else//���δ�д�״̬
			{
				mark(dep + 1);//��¼��״̬
				dfs(dep + 1);//����һ��
				unreverse(dep + 1);//��ԭ�����reverse
				unmark(dep + 1);//������¼
			}

		}
	}
}

int main()
{
	scanf("%d", &n);
	dfs(0);
	return 0;
}