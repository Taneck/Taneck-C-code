#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
void count_word(char* word, int* count, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(count + (int)*(word + i)) += 1;
	}
}
int difference(int* count)
{
	int i = 0;
	int max = 0;
	int min = 200;
	for (i = 0; i < 200; i++)
	{
		if (*(count + i) > 0)
		{
			if (*(count + i) < min)
			{
				min = *(count + i);
			}
			if (*(count + i) > max)
			{
				max = *(count + i);
			}
		}
	}
	return max - min;
}
int is_prime(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		int i = 2;
		if (n % 2 == 0)
		{
			return 0;
		}
		for (i = 3; i <= sqrt(n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}


int main()
{
	int sz, d;
	int count[200] = { 0 };
	char word[111];
	scanf("%s", word);
	sz = strlen(word);
	count_word(word, count, sz);//数每个字母的个数，桶储存
	d = difference(count);//计算最大最小之差
	if (is_prime(d))
	{
		printf("Lucky Word\n%d", d);
	}
	else
	{
		printf("No Answer\n0");
	}

	return 0;
}