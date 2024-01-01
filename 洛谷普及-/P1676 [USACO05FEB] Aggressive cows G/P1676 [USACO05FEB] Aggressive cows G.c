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
//	node[2] = n;//节点号数组
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

//题解做法：
//"看到“最大的最小距离值”这几个字，“二分答案”四个字立刻浮现在我脑海中。"
// 牛舍摆放的方式为，第1个牛舍必放，从第2个牛舍开始向后遍历，一旦找到满足“>=x”的牛舍，就立刻放（即贪心，为的是为后面留足空间能够放更多），放到num>=m即通过check
//我自己的解释：
// mid可以看作是牛舍摆放的疏密程度
// 如果mid不能通过check，说明mid过于大，需要向左二分；直到mid通过check，说明mid可能是答案，但不一定是最大的答案，
// 通过check的mid可能过密，所以向右二分，寻找是否有更大（更疏）的mid能够通过check

int n, m;
int pl[100005]; //pl是place的缩写
void init() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &pl[i]);
	}
	qsort(pl + 1, n, 4, compare); //对奶牛的需求排序
}
int check(int x) {
	int num = 1, lasth = pl[1]; //上一次放牛的房子编号
	for (int i = 2; i <= n; i++) {
		if (pl[i] - lasth >= x) { //可以放牛 
			lasth = pl[i];
			num++;
		}
	}
	return num >= m; //返回值的压行技巧
}
int main() {
	init();
	//接下来是二分答案的模板
	int l = 1, r = 1e9, ans, mid;
	while (l <= r) {
		mid = (r - l) / 2 + l; //防止爆long long的小技巧
		if (check(mid)) {
			ans = mid; //暂时存答案
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%d", ans);
	return 0;
}