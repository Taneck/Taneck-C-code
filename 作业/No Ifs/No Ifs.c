#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	unsigned int x, y, z;

	//input
	scanf("%u %u %u", &x, &y, &z);

	unsigned product = x * y * z;//calculate the product
	unsigned different = x ^ y ^ z;//if only two are the same,the value will just be that different one

	//if same,the value is 1; if not, the value is 0
	unsigned int if_xy_same = !(x ^ y);
	unsigned int if_xz_same = !(x ^ z);
	unsigned int if_yz_same = !(y ^ z);

	//if ture, the value is 1; if not, the value is 0
	unsigned int if_all_same = if_xy_same && if_xz_same && if_yz_same;
	unsigned int if_all_different = (!if_xy_same) && (!if_xz_same) && (!if_yz_same);
	unsigned int if_only_two_same = !(if_all_same || if_all_different);

	//calculate the result by using the "+" to classify
	unsigned int result = if_all_same * 0 + if_all_different * product + if_only_two_same * different;

	return result;
}




//int main()
//{
//	int x, y, z;
//
//	//input
//	scanf("%d %d %d", &x, &y, &z);
//
//	//if same,the value is 1; if not, the value is 0
//	//And also ensure the value will only be 1 or 0
//	int if_xy_same = !(x ^ y);
//	int if_xz_same = !(x ^ z);
//	int if_yz_same = !(y ^ z);
//
//	//now we get the table below
//	//(just one of the possible cases, other case is similar to this)
//	//       x=y=z x=y!=z x!=y!=z
//	//!(x^y)   1     1       0
//	//!(x^z)   1     0       0
//	//!(y^z)   1     0       0
//
//	//if all same(different), the value is 1
//	int if_all_same = if_xy_same && if_xz_same && if_yz_same;
//	int if_all_different = (!if_xy_same) && (!if_xz_same) && (!if_yz_same);
//	int all_same_or_all_different = if_all_same || if_all_different;
//
//	//only reverse the situation of all same and all different
//	//then we get a new table
//	//                                   x=y=z x=y!=z x!=y!=z
//	//(!(x^y))^all_same_or_all_different   0     1       1
//	//(!(x^z))^all_same_or_all_different   0     0       1
//	//(!(y^z))^all_same_or_all_different   0     0       1
//
//	//and multiply z/y/x respectively
//	//then the new table
//	//                                       x=y=z x=y!=z x!=y!=z
//	//((!(x^y))^all_same_or_all_different)*z   0     z       z
//	//((!(x^z))^all_same_or_all_different)*y   0     0       y
//	//((!(y^z))^all_same_or_all_different)*x   0     0       x
//
//	int result = ((!(x ^ y)) ^ all_same_or_all_different) * z
//		* ((!(x ^ z)) ^ all_same_or_all_different) * y
//		* ((!(y ^ z)) ^ all_same_or_all_different) * x;
//
//	//printf("%d", result);
//	return result;
//}