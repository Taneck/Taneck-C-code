#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char a[300] = {0};
    scanf("%s", &a);
    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] == 'A')
            printf("T");
        else if (a[i] == 'T')
            printf("A");
        else if (a[i] == 'C')
            printf("G");
        else if (a[i] == 'G')
            printf("C");
    }
    return 0;
}



//以下洛谷会报超时
// 
// 
//int main()
//{
//    char t = 'a';
//    while (1)
//    {
//        t = getchar();
//        if (t == '\n')
//            break;
//        if (t == 'A')
//            printf("T");
//        else if (t == 'T')
//            printf("T");
//        else if (t == 'C')
//            printf("T");
//        else if (t == 'G')
//            printf("T");
//    }
//    return 0;
//}


//int main()
//{
//    char t = 'a';
//    while (t != '\n')
//    {
//        t = getchar();
//        switch (t)
//        {
//        case 65:
//        {
//            printf("T");
//            break;
//        }
//        case 84:
//        {
//            printf("A");
//            break;
//        }
//        case 67:
//        {
//            printf("G");
//            break;
//        }
//        case 71:
//        {
//            printf("C");
//            break;
//        }
//        default:
//            break;
//        }
//    }
//    return 0;
//}