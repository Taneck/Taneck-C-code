#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ�����ڹػ��������롰��������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;//goto��䳣�����������Ƕ��
	}
	return 0;
}