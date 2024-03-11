#include<assert.h>
#include<stdio.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "*************";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));  //Á´Ê½·ÃÎÊ
	return 0;
}
