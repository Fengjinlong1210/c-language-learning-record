#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 4
#define COLS 2

#include<stdio.h>

//二维数组传参

//void print(int(*pa)[COLS], int r, int c)
//{			//pa是数组指针，指向arr整个数组，存放的是arr整个数组的地址，相当于&arr
//			//对pa进行解引用，得到arr的首元素，首元素是一个包含两个int类型的数组
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(pa+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[ROW][COLS] = { {1,2},{3,4},{5,6},{7,8} };
//	print(arr, ROW, COLS);
//	return 0;
//}

//int (*parr)[n] = arr;
//arr[m][n]==*(*(parr+m)+n)
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr表示数组首元素地址
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr + 1);//&arr表示arr整个数组的地址，&arr+1跨过整个数组（访问权限与arr不一样）
//
//
//	return 0;
//}

//数组名表示数组首元素地址
//有两个例外：
//1.用sizeof计算数组时，数组名表示整个数组		sizeof(arr)
//2.&加数组名，取出的是整个数组的地址			&arr


//数组指针和指针数组
int main()
{
	int arr[4][2] = { {1,2} ,{3,4},{5,6},{7,8} };
	int(*parr)[2] = arr;		//parr存放的是arr[0]的地址，arr[0]={1,2}；

	printf("%p\n", parr);
	printf("%p\n", parr+1);		//parr+1表示arr[1]的地址

	//arr是数组首元素地址，数组首元素是{1 ,2 },所以arr的值等于&arr[0]
	printf("%p\n", arr+1);    //arr+i == &arr[i]
	printf("%p\n", &arr[1]);

	//arr[0]本身是arr[0][0]这个数组的首元素地址，所以arr[0] == &arr[0][0]
	printf("%p\n", arr[1]);				//arr[i] == &arr[i][0]
	printf("%p\n", &arr[1][0]);

	return 0;
}

//数组的传参、、11.25解决
