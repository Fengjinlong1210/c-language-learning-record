#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//----------------------------浮点数在内存中的存储---------------------------
//float类型  4字节
//(-1)^s * M * 2^E
// //M为二进制浮点数，用1.XXXX表示
//第一位存储符号位，0代表正数，1代表复数
//2~9位存储E，取值范围是0~255，存入后+127，0~127代表负次方，128~255代表正次方
//后23位存储M，小数点后面的数字

//int main()
//{
//	float a = 10;
//	//0000 1010   1.01*2^3
//	//10 = (-1)^0 * 1.01 * 2^3
//	//S=0   M=1.01  E=3
//	//0 10000010 01000000 00000000 0000000
//	//0100 0001 0010 0000 0000 0000 0000 0000
//	//41 20 00 00 
//	return 0;
//}

//int main()
//{
//	int a = 9;//以浮点数存储‘
//	float* pa = (float*)&a;
//	*pa = 10.5;
//	//1010.1 == 1.0101 * 2^3
//	//0100 0001 0010 1000 0000 0000 0000 0000
//	//41 28 00 00
//	printf("%d\n", a);
//	printf("%f\n", a);
//
//	return 0;
//}

//字符串常量
//待研究
//int main()
//{
//	char* arr[5] = { "abcde", "deffa", "bcdfd", "xyzsa", "facds" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", *(&arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int(*pa)[10] = &arr;//[]方括号中的数组个数决定了pa控制的int个数
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	//当[10]时，pa+1跳过十个整形
//	return 0;
//}

////-------------------------二维数组传参------------------------------
//void init_arr(int arr[][4], int row, int col)//用二维数组接受
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//}
//
//void print_arr(int(*parr)[4], int row, int col)//用数组指针接受
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	init_arr(arr, 3, 4);
//	print_arr(arr, 3, 4);
//	return 0;
//}

//-----------------------------数组指针--------------------------
//int main()
//{
//	int arr[3][4] = { 0 };
//	//arr代表数组的第一行，是第一行的地址
//	int(*p)[4] = &arr;
//	//p是一个数组指针，指向的数组有四个元素，每个元素是int类型
//
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = { 0 };
//	int arr2[3][4] = { 1 };
//	int(*parr[2])[4] = { arr1,arr2 };//数组指针数组
//	//parr[2]表示parr是一个数组，int(*)[4]表示parr[2]指向的类型是数组指针
//	// 数组指针指向的数组有4个元素，每个元素是int类型
//	//
//	printf("%p\n", parr[0]);
//	printf("%p\n", parr[1]);
//	//38  56
//	//parr[0]的地址高于parr[1]的地址
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//由低到高排列
//	return 0;
//}

//------------------------指针数组传参-------------------------------
void test(int* arr[])
{
	//可以用数组接受，数组的元素是int*
}

void test2(int** arr)
{
	//也可以用二级指针接受，因为arr是数组首元素地址//
	//而数组的元素就是int*，传过来int*的地址，是一个二级指针
}

int main()
{
	int* arr[5] = { NULL };
	test(arr);
	test2(arr);
	return 0;
}