#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int c[1101] = { 0 };
    char t='a', b[1101] = {0};
    int s = 1, i;
    for (i = 1;; i++)
    {
        if (t == '\n')
        {
            break;
        }
        scanf("%c", &t);
        c[t]++;
        b[i] = t;
    }
    if (i == 3)
    {
        printf("%c", b[1]);
    }
    else
    {
        for (int j = 1; j <= i - 3; j++)
        {
            if (c[b[j]] == 1)
            {
                s = 0;
                printf("%c", b[j]);
                break;
            }
        }
        if (s)
        {
            printf("no");
        }
    }
    return 0;
}