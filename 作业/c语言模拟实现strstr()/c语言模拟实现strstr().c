#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* current = str1;

	if (*str2 == '\0')
		return (char*)str1;

	while (*current)
	{
		s1 = current;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '/0')
			return current;
		current++;
	}
	return NULL;
}