#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char arr[1000009]= { 0 };
char brr[11] = { 0 };
int main()
{
	int n = 0, j, i=0, count= 0,first = -1,c;
	char* left = NULL;
	char* right = NULL;
	scanf("%s", brr);
	int sz = strlen(brr);
	for (i = 0; i < 11; i++)
	{
		brr[i] = tolower(brr[i]);
	}
	c = getchar();
	gets(arr);
	for (i = 0; i < 1000001; i++)
	{
		arr[i] = tolower(arr[i]);
	}
	left = arr;

	while (left - arr <= 1000000 - 1)
	{
		while (*left == ' ')
			left++;
		right = left + 1;
		while (*right != ' '&&right - arr <= 1000000 - 1)
			right++;
		if (right - left == sz)
		{
			if (strncmp(left, brr, sz) == 0)
			{
				count++;
				if (first == -1)
				{
					first = left - arr;
				}
			}
		}
		left = right;
	}

	if (first != -1)
	{
		printf("%d %d", count, first);
		return 0;
	}
	printf("%d",first);
	return 0;
}