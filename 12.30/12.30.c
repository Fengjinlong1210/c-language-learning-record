#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap_arr(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	swap_arr(arr1, arr2, sz);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void init_arr(int* arr, int sz, int num)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(arr + i) = num;
//	}
//}
//
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//void reverse_arr(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init_arr(arr, sz, 1);
//	print_arr(arr, sz);
//	reverse_arr(arr, sz);
//	print_arr(arr, sz);
//
//}

//-----------------------冒泡排序--------------------------------
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//--------------------------矩阵求和-----------------------------

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//-------------------------矩阵转置打印-----------------------------
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//操作符
//-------------------------------------------------------
//
//1.算数操作符
// +
// -
// *
// /  整数/整数得到的还是整数，（整数/浮点数）||（浮点数/整数）||（浮点数/浮点数）得到的是浮点数
// %  取余数，只能对两个整数使用

//int main()
//{
//
//	printf("%f\n", 10.0 / 20);
//	return 0;
//}

//2.移位操作符
// <<  >>
//对二进制位左移或右移（移动补码）
//左移相当于乘2，右移相当于除2
//右移分为算术右移和逻辑右移
//算术右移保留符号位，左边补符号位
//逻辑右移不保留符号位，左边补0

//int main()
//{
//	int a = -10;
//
//	//10000000 00000000 00000000 00001010原码
//	//11111111 11111111 11111111 11110101反码
//	//11111111 11111111 11111111 11110110补码
//	//a = a << 1;
//	//00000000 00000000 00000000 00010100
//	//a = a >> 1;
//
//	//11111011
//	//00000100
//	//00000101
//	
//	printf("%d\n", a);
//	return 0;
//}

//3.赋值操作符
// =、+=、-=、*=、/=  %=  >>=  <<=  &=  |=  ^=

//int main()
//{
//	int a = 10;
//	a &= 1;
//	printf("%d\n", a);
//	return 0;
//}

//4.单目操作符
// ！、*（解引用）、&（取地址）、++、--、sizeof
// ！逻辑取反

//int main()
//{
//	int a = -5;
//	int b = 10;
//	printf("%d\n", !b);
//	printf("%d\n", !a);
//	return 0;
//}
void size_arr(int arr[])
{
	printf("%d\n", sizeof(arr));
}

void size_arr2(char arr[])
{
	printf("%d\n", sizeof(arr));//指针大小
}

int main()
{
	int arr[10] = { 0 };
	char arr2[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr2));
	size_arr(arr);
	size_arr2(arr2);
	return 0;
}

//5.位操作符
// ^（按位异或）、|（按位或）、&（按位与）

//计算机中的数据是以补码存储的

//int main()
//{
//	//&(按位与)，按二进制位与，有0为0
//	// |（按位或），有1为1
//	// ^按位异或，相同为0，相异为1
//	//a^a=0
//	//a^0=a
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	int b = 0;
//	//00000000 00000000 00000000 00000000
//	b = a ^ 0;
//	printf("%d\n", b);
//	return 0;
//}

//------------------------按位异或交换两个数-------------------------------
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//00001010
//	//00010100
//	//00011110
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//------------------------求一个整数二进制位中1的个数-------------------------------
//int main()
//{
//	//只能计算正数
//	int a = 12;
//	//0111 1011
//	int count = 0;
//	while (a)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = -15;
//	int count = 0;
//	while (a)
//	{
//		if ((a % 2) == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num &= (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//6.关系操作符
// >  <  =  >=  <=  ==
//7.逻辑操作符
// &&  || 
//8.条件操作符(三目2操作符)
// ？：
//9.逗号表达式
// 逗号表达式从左向右计算，整个表达式结果是最后一个表达式的结果