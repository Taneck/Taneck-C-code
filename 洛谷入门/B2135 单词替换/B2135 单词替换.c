#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i, n=0;
	char word[200][100];
	while (scanf("%s", word[n++])!=EOF)//���и��س�������ԭ����0��n-4�����滻��Ϊn-3���滻��Ϊn-2
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