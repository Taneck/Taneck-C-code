#define _CRT_SECURE_NO_WARNINGS
//������
#include <stdio.h>
int main()
{
	int i, n, last = 0, temp = 0,ans=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp > last)
		{
			ans += (temp - last);
		}
		last = temp;
	}
	printf("%d", ans);
	return 0;
}


////90�֣���ʱ�����ڴ�ԭ��vs2022�²�����
//#include <stdio.h>
//int brick[100003] = { 0 };
//int build_step(int arr[],int l,int r)
//{
//	int zero_point[100003] = { 0 };
//	if (l > r)
//	{
//		return 0;
//	}
//	if (l == r)
//	{
//		return arr[l];
//	}
//	int i,j=1,temp_l=l,temp_r=r;
//	int min = 10000;
//	int next_level = 0;
//	int count = 0;
//	for (i = l; i <= r; i++)//����Сֵ
//	{
//		min = arr[i] < min ? arr[i] : min;
//	}
//	for (i = l; i <= r; i++)//��ȥ��Сֵ
//	{
//		arr[i] -= min;
//		if (arr[i] == 0)
//		{
//			count++;
//			zero_point[j] = i;
//			j++;
//		}
//	}
//	zero_point[0] = l - 1;
//	zero_point[count+1] = r + 1;
//	for (i = 0; i < count+1; i++)//�м�n��������n+1��
//	{
//		next_level += build_step(arr, zero_point[i] + 1, zero_point[i + 1] - 1);
//	}
//	return min + next_level;
//}
//
//int main()
//{
//	int i,n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &brick[i]);
//	}
//	printf("%d", build_step(brick,1,n));
//	return 0;
//}