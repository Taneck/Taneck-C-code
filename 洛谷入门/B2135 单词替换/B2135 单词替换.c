#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i, n=0;
	char word[200][100];
	while (scanf("%s", word[n++])!=EOF)//还有个回车，所以原句在0到n-4，被替换词为n-3，替换词为n-2
	{
		;
	}
	for (i = 0; i <= n - 5; i++)
	{
		if (strcmp(word[i], word[n - 3]) == 0)
		{
			printf("%s ", word[n - 2]);
		}
		else
		{
			printf("%s ", word[i]);
		}
	}
	if (strcmp(word[i], word[n - 3]) == 0)
	{
		printf("%s", word[n - 2]);
	}
	else
	{
		printf("%s", word[i]);
	}
	return 0;
}