#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0,t=0, sz;
    char a[2000] = "\0";
    int b[2000] = { 0 };
    gets(a);
    sz = strlen(a);
    for (j = 0; j<sz; j++)
    {
        if (a[j] != ' ')
        {
            i++;
        }
        else
        {
            if (a[j-1] == ' ')
            {
                continue;
            }
            b[t] = i;
            t++;
            i = 0;
        }
    }
    b[t] = i;//把最后的单词补上
    printf("%d", b[0]);
    for (j = 1; b[j] != 0; j++)
    {
        printf(",%d", b[j]);
    }
    return 0;
}


//She was born in 1990-01-02 and from Beijing city.

//for (j = 0; (a[j] = getchar()) != 13; j++)
//{
//    if (a[j] != 32)
//    {
//        i++;
//    }
//    else
//    {
//        b[j] = i;
//        j++;
//        i = 0;
//    }
//}
//printf("%d", b[0]);
//for (j = 1; b[j] != 0; j++)
//{
//    printf("%d", b[j]);
//}

//b = getchar();
//while (1)
//{
//    if (b != 32)
//    {
//        i++;
//    }
//    else
//    {
//        a[j] = i;
//        j++;
//        i = 0;
//    }
//    b = getchar();
//    if (b == 13)
//    {
//        break;
//    }
//}
//printf("%d", a[0]);
//for (j = 1; a[j] != 0; j++)
//{
//    printf("%d", a[j]);
//}

//int main()
//{
//    char a[70] = { 0 }, b[70] = { 0 };
//    int i = 0;
//    for (int j = 0; j < 9; j++)
//    {
//        i = 0;
//        scanf("%s", &a);
//        while (a[i] != 0)
//        {
//            i++;
//        }
//        if (j == 0)
//        {
//            printf("%d", i);
//        }
//        else
//        {
//            printf(",%d", i);
//        }
//    }
//    return 0;
//}