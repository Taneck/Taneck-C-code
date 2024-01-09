#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
int map[40000][20] = { 0 };//答案直接记录在map中
int check_end[20] = { 0 };//用于检查某dep深度是否全为0的辅助数组
int used_map[40000] = { 0 };//记录是否用过
int n;
void print()//打印答案函数
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
void reverse(int k, int dep)//将dep行第i个翻转后的结果复制到dep+1行
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
void unreverse(int dep)//还原某行为全0，即尚未使用过这一dep
{
	memset(map[dep], 0, n * 4);
}

int calc(int dep)//将map的dep行的所有1 / 0视作二进制，转化为十进制, 从左到右位权逐渐变大；
{
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		ret += map[dep][i] * pow(2, i);
	}
	return ret;
}
void mark(int dep)//在used_map中记录该01串代表的十进制是否被用过
{
	used_map[calc(dep)] = 1;
}
void unmark(int dep)//撤销记录
{
	used_map[calc(dep)] = 0;
}


int check_map(int dep)//检查该行是否被用过
{
	int ret = calc(dep);//将map一行的所有1/0视作二进制，转化为十进制,从左到右位权逐渐变大；
	if (used_map[ret] == 1)	return 1;//被用过
	else return 0;
}

void dfs(int dep)
{
	if (dep > 1 && memcmp(map[dep], check_end, n * 4) == 0)//变为初始状态了
	{
		if (dep == pow(2, n))//如果深度也正确，即搜到了
		{
			print();
			return;//直接结束深搜
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			reverse(i, dep);//翻转第i个,并记录在dep+1的map上
			if (check_map(dep + 1))//如果已有此dep+1的map状态
			{
				unreverse(dep + 1);//还原上面的reverse操作
				continue;//直接下一种可能
			}
			else//如果未有此状态
			{
				mark(dep + 1);//记录此状态
				dfs(dep + 1);//更深一层
				unreverse(dep + 1);//还原上面的reverse
				unmark(dep + 1);//撤销记录
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