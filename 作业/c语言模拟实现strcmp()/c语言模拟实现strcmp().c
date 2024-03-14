#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while ((*str1 - *str2 == 0) && *str1)
	{
		str1++;
		str2++;
	}

	return *str1 - *str2;
}