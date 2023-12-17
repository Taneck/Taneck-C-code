#define _CRT_SECURE_NO_WARNINGS
//题解
#include <stdio.h>
int main()
{
	int a[1011] = { 0 }, x = 0, num = 0, b[10] = { 0,1,2,3,5,10,20 }, ans = 0;
	int t[1011] = { 1 };
	for (int i = 1; i <= 6; i++)
	{
		scanf("%d", &x);
		for (int j = 1; j <= x; j++)
		{
			a[++num] = b[i];
		}
	}
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1010; j >= 0; j--)
		{
			if (t[j])
			{
				t[j + a[i]] = 1;
			}
		}
	}
	for (int i = 1; i <= 1010; i++)
	{
		if (t[i])
		{
			ans++;
		}
	}
	printf("Total=%d", ans);
	return 0;
}



////正确但超时
//#include <stdio.h>
//int weigh(int i, int a, int b, int c, int d, int e, int f)//weight 1 2 3 5 10 20
//{
//	if (a < 0) return 0;
//	if (b < 0) return 0;
//	if (c < 0) return 0;
//	if (d < 0) return 0;
//	if (e < 0) return 0;
//	if (f < 0) return 0;
//	switch (i)
//	{
//	case 1:
//		if (a) return 1;
//		return 0;
//		break;
//	case 2:
//		if (b) return 1;
//		if (weigh(1, a - 1, b, c, d, e, f)) return 1;
//		return 0;
//		break;
//	case 3:
//		if (c) return 1;
//		if (weigh(2, a - 1, b, c, d, e, f)) return 1;
//		if (weigh(1, a, b - 1, c, d, e, f)) return 1;
//		return 0;
//		break;
//	case 4:
//		if (weigh(3, a - 1, b, c, d, e, f)) return 1;
//		if (weigh(2, a, b - 1, c, d, e, f)) return 1;
//		if (weigh(1, a, b, c - 1, d, e, f)) return 1;
//		return 0;
//		break;
//	case 5:
//		if (d) return 1;
//		if (weigh(4, a - 1, b, c, d, e, f)) return 1;
//		if (weigh(3, a, b - 1, c, d, e, f)) return 1;
//		if (weigh(2, a, b, c - 1, d, e, f)) return 1;
//		return 0;
//		break;
//	case 10:
//		if (e) return 1;
//		if (weigh(i - 1, a - 1, b, c, d, e, f)) return 1;
//		if (weigh(i - 2, a, b - 1, c, d, e, f)) return 1;
//		if (weigh(i - 3, a, b, c - 1, d, e, f)) return 1;
//		if (weigh(i - 5, a, b, c, d - 1, e, f)) return 1;
//		return 0;
//		break;
//	case 20:
//		if (f) return 1;
//		if (weigh(i - 1, a - 1, b, c, d, e, f)) return 1;
//		if (weigh(i - 2, a, b - 1, c, d, e, f)) return 1;
//		if (weigh(i - 3, a, b, c - 1, d, e, f)) return 1;
//		if (weigh(i - 5, a, b, c, d - 1, e, f)) return 1;
//		if (weigh(i - 10, a, b, c, d, e - 1, f)) return 1;
//		return 0;
//		break;
//	default:
//		if (i > 5 && i <= 9)
//		{
//			if (weigh(i - 1, a - 1, b, c, d, e, f)) return 1;
//			if (weigh(i - 2, a, b - 1, c, d, e, f)) return 1;
//			if (weigh(i - 3, a, b, c - 1, d, e, f)) return 1;
//			if (weigh(i - 5, a, b, c, d - 1, e, f)) return 1;
//			return 0;
//			break;
//		}
//		if (i > 10 && i <= 19)
//		{
//			if (weigh(i - 1, a - 1, b, c, d, e, f)) return 1;
//			if (weigh(i - 2, a, b - 1, c, d, e, f)) return 1;
//			if (weigh(i - 3, a, b, c - 1, d, e, f)) return 1;
//			if (weigh(i - 5, a, b, c, d - 1, e, f)) return 1;
//			if (weigh(i - 10, a, b, c, d, e - 1, f)) return 1;
//			return 0;
//			break;
//		}
//		if (i > 20)
//		{
//			if (weigh(i - 1, a - 1, b, c, d, e, f)) return 1;
//			if (weigh(i - 2, a, b - 1, c, d, e, f)) return 1;
//			if (weigh(i - 3, a, b, c - 1, d, e, f)) return 1;
//			if (weigh(i - 5, a, b, c, d - 1, e, f)) return 1;
//			if (weigh(i - 10, a, b, c, d, e - 1, f)) return 1;
//			if (weigh(i - 20, a, b, c, d, e, f - 1)) return 1;
//			return 0;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a, b, c, d, e, f;
//	int i;
//	int count = 0;
//	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//	for (i = 1; i <= a + b * 2 + c * 3 + d * 5 + e * 10 + f * 20; i++)
//	{
//		count += weigh(i, a, b, c, d, e, f);
//	}
//	printf("Total=%d", count);
//	return 0;
//}