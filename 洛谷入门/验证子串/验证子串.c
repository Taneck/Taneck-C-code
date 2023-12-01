#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char a[21] = { 0 }, b[21] = { 0 }, t[21];
    int n, c = 0, d = 0, p, q = 1, s = 1, j;
    scanf("%s %s", &a, &b);
    while (a[c] != 0)
    {
        c++;
    }
    c--;
    while (b[d] != 0)
    {
        d++;
    }
    d--;
    if (c > d)
    {
        p = c;
        c = d;
        d = p;
        for (int i = 0; a[i] != 0; i++)
        {
            t[i] = a[i];
            a[i] = b[i];
            b[i] = t[i];
        }
    }
    for (int i = 0; i <= d; i++)
    {
        if (a[0] == b[i])
        {
            for (j = 1; j <= c; j++)
            {
                if (a[j] != b[j + i])
                {
                    break;
                }
            }
            if (j == c+1)
            {
                printf("%s is substring of %s", a, b);
                return 0;
            }
            
        }
    }
    printf("No substring");
    return 0;
}