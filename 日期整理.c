#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct possibility
{
	int year;
	int month;
	int day;
};

int run(int r)//�ж��Ƿ�����
{
	if (r % 4 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int shiji(int sj)//�ж��Ƿ�Ϊ20XX��
{
	if (sj >= 0 && sj <= 59)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int month(int m)//�ж����Ƿ�Ϸ�
{
	if (m >= 1 && m <= 12)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int day(int d1, int d2, int d3)//�ж����Ƿ�Ϸ��������ꣿ���£�
{
	if ((d1 == 1 && d2 == 2 && (d3 > 29 || d3 == 0)) || (d1 == 0 && d2 == 2 && (d3 > 28 || d3 == 0)) || ((d2 == 1 || d2 == 3 || d2 == 5 || d2 == 7 || d2 == 8 || d2 == 10 || d2 == 12) && (d3 == 0 || d3 > 31)) || ((d2 == 2 || d2 == 4 || d2 == 6 || d2 == 9 || d2 == 11) && (d3 == 0 || d3 > 30)))//���Ϸ���135781012
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int a, b, c;
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int z = 0;
	int arr[3];
	int brr[3];
	scanf("%d/%d/%d", &a, &b, &c);
	struct possibility p1 = { a,b,c };
	struct possibility p2 = { c,a,b };
	struct possibility p3 = { c,b,a };

	//p1
	if (month(p1.month) && day(run(p1.year), p1.month, p1.day))//�ºϷ����պϷ�
	{
		if (shiji(p1.year))
		{
			arr[0] = (20000000 + (p1.year) * 10000 + (p1.month) * 100 + (p1.day));//�ݴ�Ϸ��𰸣��ȴ�����
		}
		else
		{
			arr[0] = (19000000 + (p1.year) * 10000 + (p1.month) * 100 + (p1.day));
		}
	}
	else
	{
		arr[0] = 0;
	}
	//p2
	if (month(p2.month) && day(run(p2.year), p2.month, p2.day))//�ºϷ����պϷ�
	{
		if (shiji(p2.year))
		{
			arr[1] = (20000000 + (p2.year) * 10000 + (p2.month) * 100 + (p2.day));//�ݴ�Ϸ��𰸣��ȴ�����
		}
		else
		{
			arr[1] = (19000000 + (p1.year) * 10000 + (p1.month) * 100 + (p1.day));
		}
	}
	else
	{
		arr[1] = 0;
	}
	//p3
	if (month(p3.month) && day(run(p3.year), p3.month, p3.day))//�ºϷ����պϷ�
	{
		if (shiji(p3.year))
		{
			arr[2] = (20000000 + (p3.year) * 10000 + (p3.month) * 100 + (p3.day));//�ݴ�Ϸ��𰸣��ȴ�����
		}
		else
		{
			arr[2] = (19000000 + (p1.year) * 10000 + (p1.month) * 100 + (p1.day));
		}
	}
	else
	{
		arr[2] = 0;
	}
	
	for (i = 0; i < 3; i++)
	{
		if (arr[i] != 0)
		{
			brr[j] = arr[i];//�����Ϸ���
			j++;//��¼�Ϸ�������
		}
	}

	//ð������
	for (m = 0; m < j - 1; m++)
	{
		for (n = 0; n < j - 1 - m; n++)
		{
			if (brr[n] > brr[n + 1])
			{
				int jiaohuan = brr[n];
				brr[n] = brr[n + 1];
				brr[n + 1] = jiaohuan;
			}
		}
	}
	//�ж��Ƿ��һ�γ���
	for (z = 0; z < j; z++)
	{
		if (brr[z] != brr[z - 1])
		{
			printf("%d-%02d-%02d\n", (brr[z] / 10000), ((brr[z] % 10000) / 100), (brr[z] % 100));
		}
	}

	return 0;

}