#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//-------------------------------------函数指针------------------------------------------------------

								//函数名就是函数的地址	
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int ret = Add(a, b);
//	int (*p)(int, int) = Add;//add函数名存入函数指针
//	
//	//printf("%d\n", Add(a, b));
//	//printf("%d\n", p(a, b));
//	//printf("%d\n", (*p)(a, b));//解引用符号*在函数指针里不起作用
//	//p == (*p) == Add
//
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	return 0;
//}
//----------------------------------------练习10.13---------------------------------------------------
//#define ROWS 3
//#define COLS 5
//
//void input(int (*arr)[COLS], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		printf("请输入第%d组数\n", i+1);
//		for (j = 0; j < c; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//}
//
//void show(int (*arr)[COLS], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void average_row(int(*arr)[COLS], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	int n = 1;
//	int num = 0;
//	float avg = 0.0;
//	int sum = 0;
//	float sum_avg = 0.0;
//	for (i = 0; i < r; i++)
//	{
//		num = 0;
//		for (j = 0; j < c; j++)
//		{
//			num += arr[i][j];
//		}
//		printf("%d均值是%f\n", n, num / 5.0);
//		sum += num;
//	}
//
//	printf("总均值为%.2f", sum / 15.0);
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	printf("请输入三组数\n");
//	input(arr, ROWS, COLS);
//	show(arr, ROWS, COLS);
//
//	average_row(arr, ROWS, COLS);
//
//	return 0;
//}

float row_average(int arr[], int cols)
{
	int i = 0;
	float sum = 0.0;
	for (i = 0; i < cols; i++)
	{
		sum += arr[i];
	}
	return sum / cols;
}

float arr_average(int(*arr)[3], int row)
{
	int i = 0;
	float sum = 0.0;
	for (i = 0; i < row; i++)
	{
		sum += row_average(*(arr + i), 3);
	}
	return sum / row;
}

int main()
{
	int arr[4][3] = {
		{1,2,3},
		{2,3,4},
		{3,4,5},
		{4,5,6}};
	float ret=arr_average(arr, 4);
	printf("%f\n", ret);
	return 0;
}