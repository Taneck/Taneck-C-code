#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char a[100] = { 0 };
    int i = 0;
    scanf("%s", &a);
    while (a[i] != 0)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
        if (a[i] >= 'A' && a[i] <= 'W')
        {
            a[i] += 3;
        }
        else if (a[i] >= 'a' && a[i] <= 'w')
        {
            a[i] += 3;
        }
        else if (a[i] >= 'X' && a[i] <= 'Z')
        {
            a[i] -= 23;
        }
        else if (a[i] >= 'x' && a[i] <= 'z')
        {
            a[i] -= 23;
        }
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
    return 0;
}