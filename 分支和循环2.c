#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')//清空输入缓存区
//	{
//		;
//	}
//	printf("请确认（Y/N）\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("取消确认\n");
//	}
//	return 0;
//}

////1!+2!+3!的优化算法
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//二分查找
int main()
{
	int mid,k;
	int a[] = { 0,1,2,3,4,5,7,8,9 };
	int left = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	scanf("%d", &k);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//#include <string.h>
//函数strlen()   比较字符串strcmp(……,……)，前大则返回大于0的数字，前小返小于0，相同返0
//#include <Windows.h>
//sleep(1000)//以毫秒为单位，1s
//#include <stdlib.h>
//system("cls")//执行系统命令的一个函数-cls-清空屏幕
