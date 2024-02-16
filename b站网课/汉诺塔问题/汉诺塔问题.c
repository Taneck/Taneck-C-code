#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(char source, char destination)
{
	printf("%c--->%c\n", source, destination);
}
void hanoi(int n, char source, char process, char destination)
{
	if (n == 1) move(source, destination);
	else
	{
		hanoi(n - 1, source, destination, process);
		move(source, destination);
		hanoi(n - 1, process, source, destination);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}