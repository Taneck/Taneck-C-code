#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* begin = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return begin;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s", my_strcat(arr1, arr2));

}