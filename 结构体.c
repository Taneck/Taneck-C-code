#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct people//�ṹ����������
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1, p2;//���п��ޣ���ȫ�ֱ���
//struct people p3, p4;//ȫ�ֱ���
//
//struct st
//{
//	struct people p;//�ṹ�����ͳ�Ա�����ǽṹ��
//	int num;
//	float f;
//};
//
//void print2(struct people* sp)//����
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
//}
//
//void print1(struct people p)//��ʱ����ʱ���˷ѿռ䣬�����½��������ڴ���ʱ��������Ҫѹջ
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
//}
//
//int main()
//{
//	struct people p5 = { "vae","12345678911","��",181};//�ֲ�����
//	struct st s = { {"����","12312312312","Ů",167},100,3.14f };//���������ڴ��в��ܾ�ȷ���棬�����3.14000010
//	printf("%s %s %s %d\n", p5.name, p5.tele, p5.sex, p5.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//	print2(&p5);
//	print1(p5);
//	return 0;
//}

//���������еĶ����Ƹ������ֽⷨ

int count1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int count2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		count += ((n >> i) & 1);
	}
	return count;
}
int count3(int n)//�ȸ������
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//�������ж��Ƿ���2��n�η���if(n&(n-1)==0)������
		count++;
	}
	return count;
}


int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", count1(num));
	printf("%d\n", count2(num));
	printf("%d\n", count3(num));
	return 0;
}