#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int arr[111111] = { 0 };
//int node[111111] = { 0 };
int compare(const void* p1, const void* p2)
{
	return (*((int*)p1)) - (*((int*)p2));
}
//int dichotomy(int arr[], int l, int r,int node[],int * temp_node)
//{
//	int left = l + 1, right = r - 1, distance = 0, ans_i;
//	if (left > right)	return 0 ;//
//	while (left <= right)
//	{
//		int d_l, d_r, d, ans_ii;
//		d_l = (arr[left] - arr[l]) < (arr[r] - arr[left]) ? (arr[left] - arr[l]) : (arr[r] - arr[left]);
//		d_r = (arr[right] - arr[l]) < (arr[r] - arr[right]) ? (arr[right] - arr[l]) : (arr[r] - arr[right]);
//		if (d_l >= d_r)
//		{
//			ans_ii = left;
//			d = d_l;
//		}
//		else
//		{
//			ans_ii = right;
//			d = d_r;
//		}
//		if (d > distance)
//		{
//			ans_i = ans_ii;
//			distance = d;
//		}
//		left++;
//		right--;
//	}
//	*temp_node = ans_i;
//	return distance;
//}
//
//int main()
//{
//	int n, m, i, j,ans,count=3;
//	scanf("%d %d", &n, &m);
//	node[1] = 1;
//	node[2] = n;//�ڵ������
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, compare);
//	for (i = 1; i <= m - 2; i++)
//	{
//		int ans_d = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int temp_node;
//			int ret = dichotomy(arr, node[j], node[j+1],node, &temp_node);
//			if (ret > ans_d)
//			{
//				node[count] = temp_node;
//				ans_d = ret;
//			}
//		}
//		count++;
//		qsort(node, count, 4, compare);
//		ans = ans_d;
//	}
//	printf("%d", ans);
//	return 0;
//}

//���������
//"������������С����ֵ���⼸���֣������ִ𰸡��ĸ������̸��������Ժ��С�"
// ţ��ڷŵķ�ʽΪ����1��ţ��طţ��ӵ�2��ţ�Ὺʼ��������һ���ҵ����㡰>=x����ţ�ᣬ�����̷ţ���̰�ģ�Ϊ����Ϊ��������ռ��ܹ��Ÿ��ࣩ���ŵ�num>=m��ͨ��check
//���Լ��Ľ��ͣ�
// mid���Կ�����ţ��ڷŵ����̶ܳ�
// ���mid����ͨ��check��˵��mid���ڴ���Ҫ������֣�ֱ��midͨ��check��˵��mid�����Ǵ𰸣�����һ�������Ĵ𰸣�
// ͨ��check��mid���ܹ��ܣ��������Ҷ��֣�Ѱ���Ƿ��и��󣨸��裩��mid�ܹ�ͨ��check

int n, m;
int pl[100005]; //pl��place����д
void init() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &pl[i]);
	}
	qsort(pl + 1, n, 4, compare); //����ţ����������
}
int check(int x) {
	int num = 1, lasth = pl[1]; //��һ�η�ţ�ķ��ӱ��
	for (int i = 2; i <= n; i++) {
		if (pl[i] - lasth >= x) { //���Է�ţ 
			lasth = pl[i];
			num++;
		}
	}
	return num >= m; //����ֵ��ѹ�м���
}
int main() {
	init();
	//�������Ƕ��ִ𰸵�ģ��
	int l = 1, r = 1e9, ans, mid;
	while (l <= r) {
		mid = (r - l) / 2 + l; //��ֹ��long long��С����
		if (check(mid)) {
			ans = mid; //��ʱ���
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%d", ans);
	return 0;
}