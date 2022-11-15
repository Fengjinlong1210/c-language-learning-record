#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* pa = &a;			//const在星号左边，指针解引用的值不能改变（强调解引用）
//								//但可以改变指针的指向
//  *pa=20;//错误
//	pa = &b;//正确
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* const pa = &a;			//const在星号右边，指针的指向不能发生改变（强调指针的指向）
//								//但可以改变解引用的值
//	//pa = &b;//错误
//	*pa = 20;//正确
//	return 0;
//}

//二维数组的解引用
//#define ROW 3
//#define LINE 4
//
//int main()
//{
//	int arr[ROW][LINE] = { {0,1,2,3},{5,4,5,6},{0,7,8,9} };
//	//此时arr为二级指针，要获得arr[0][0]的值，要对arr解引用两次
//	// 
//	//printf("%d\n", *arr+1);
//	//arr=arr[0](arr[0]为三个元素的数组)
//	//arr+1意为跳过三个int大小
//	//arr[0]+1意为跳过一个int大小
//	
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);//跳过了ROW个int类型
//
//	//printf("%p\n", arr[0]);
//	//printf("%p\n", arr[0] + 1);//跳过一个int类型
//
//	//此时arr为二级指针，要获得arr[0][0]的值，要对arr解引用两次
//	printf("%d\n", **arr);
//
//	printf("%d\n", *(*(arr + 1)+1));
//	return 0;
//}


//二级指针和二维数组的表示						、、未解决