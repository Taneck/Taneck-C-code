#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int trans(int* parr, int n, int r)
{
	int i = 0;
	while (n)
	{
		if (n > 0)
		{
			*(parr + i) = n % r;
			n /= r;
			i++;
		}
		else if (n % r == 0)
		{
			*(parr + i) = 0;
			n = n / r;
			i++;
		}
		else
		{
			*(parr + i) = n - r * (n / r + 1);
			n = n / r + 1;
			i++;
		}
	}
	return i-1;
}
void specialprint(int n)
{
	switch (n)
	{
	case 10:
		printf("A");
		break;
	case 11:
		printf("B");
		break;
	case 12:
		printf("C");
		break;
	case 13:
		printf("D");
		break;
	case 14:
		printf("E");
		break;
	case 15:
		printf("F");
		break;
	case 16:
		printf("G");
		break;
	case 17:
		printf("H");
		break;
	case 18:
		printf("I");
		break;
	case 19:
		printf("J");
		break;
	default:
		break;
	}
}

int main()
{
	int n, r,i;
	int arr[100];
	scanf("%d %d", &n, &r);
	trans(arr, n, r);
	printf("%d=", n);
	for (i = trans(arr, n, r); i >= 0; i--)
	{
		if (arr[i] < 10)
		{
			printf("%d",arr[i]);
		}
		else
		{
			specialprint(arr[i]);
		}
	}
	printf("(base%d)", r);
	return 0;
}