
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


/*
int arr[5];				//整形数组
int* parr1[10];			//指针数组
int(*parr2)[10];		//数组指针，指向整个数组，数组有10个元素，数组元素是int类型			//数组指针int (*)[]
int(*parr3[10])[5];		//数组指针数组，数组元素是数组指针(10个数组指针)，每个数组指针指向5个元素的数组，int类型
*/

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//
//	int(*parr[2])[5] = { &arr1,&arr2 };
//
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr2);
//
//
//	printf("%p\n", parr[0]);
//	printf("%p\n", parr[1]);
//
//	return 0;
//}

                                          //数组指针的使用

//void print(int(*p)[4], int r, int c)	//定义函数  传过来的是arr首元素地址，就是{1,2,3,4}的地址
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//对p+i解引用得到第p+i个数组首元素地址
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[2][4] = { {1,2,3,4},{5,6,7,8} };
//	int(*pa)[4] = &arr;
//	print(arr, 2, 4);
//
//	return 0;
//}

                                      //一维数组的传参

//void print(int arr[5])			//第一种
//{										arr[i] == *(arr+i)
//}
//
//void print(int arr[])				//第二种
//{										括号内容能省略
//
//}
//
//void print(int* arr)				//第三种  直接传地址
//{
//
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr);//首元素地址
//	return 0;
//}


                                           //指针数组传参

//void test(int* arr)
//{
//	//传数组首元素地址
//}

//void test(int** arr)
//{
//
//}
//
//int main()
//{
//	int* arr[5] = {0};
//	test(arr);
//	return 0;
//}

                                             //二维数组传参
//void test(int arr[][4])
//{
//	//可以省略行，不能省略列（必须要知道一行有多少元素）
//}

//void test(int(*arr)[4])
//{
//	//用数组指针接受
//	printf("%p\n", *arr);
//	printf("%p\n", *arr+1);
//	printf("%p\n", *(arr + 1));
//	printf("%d\n", **arr);
//}

//void test(int **arr)
//{
//	//错误，数组指针不是二级指针
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5 },{3,4,5,6} };
//	test(arr);
//	return 0;
//}

//--------------------------------------------练习10.2----------------------------------------

//void mycopy1(double target[],const double source[], int n)//第一种方法，直接利用数组名
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        target[i] = source[i];
//    }
//}
//
//void mycopy2(double* target, const double* source, int n)//利用数组地址
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        *target++ = *source++;
//    }
//}
//
//void mycopy3(double *target,const double *source , double* end)//地址
//{
//    while (source < end)
//    {
//        *target++ = *source++;
//    }
//}
//
//int main()
//{
//    int i = 0;
//    double arr[5] = { 1.1,2.2,3.3,4.4,5.5 };
//    double copy1[5] = { 0 };
//    double copy2[5] = { 0 };
//    double copy3[5] = { 0 };
//
//    //mycopy1(copy1, arr, 5);
//    //mycopy2(copy2, arr, 5);
//    mycopy3(copy3, arr, arr + 5);
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%2.1f ", copy3[i]);
//    }
//    printf("\n");
//    return 0;
//}

//--------------------------------------------练习10.3-----------------------------------------------
//int comp(const int* arr,int *end)
//{
//    int temp = *arr;
//    while (arr < end)
//    {
//        if (temp < *(arr + 1))
//        {
//            temp = *(arr + 1);
// 
// 
// 
// 
//        }
//        arr++;
//    }
//    return temp;
//}
//
//int main()
//{
//    int arr[5] = { 100,2,3000,4,500 };
//    //comp(arr);
//    printf("%d\n", comp(arr,arr+5));
//    return 0;
//}

//---------------------------------------练习10.4----------------------------------------------------
//int test(const double* arr, int n)
//{
//    int i = 0;
// 
//    int ret = 0;
//    double max = *arr;
//    for (i = 0; i < n; i++)
//    {
//        if (max < *(arr + i))
//        {
//            max = *(arr + 1);
//            ret = i;
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    double arr[5] = { 1.2,20.3,3.4,4.5,5.6 };
//    //test(arr, 5);
//
//    printf("%d\n", test(arr, 5));
//    return 0;
//
//}

//-------------------------------------------------------------------------------------------
//计算i+ii+iii+...的前n项
//int main()
//{
//    int i = 0;
//    int a = 0;
//    int n = 0;
//    int sum = 0;
//    printf("input i and n\n");
//    scanf("%d %d", &a, &n);
//
//    for (int i = 1; i <= n; i++)
//    {
//        sum += a;
//        a = 10 * a + a;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//结构体

//struct student
//{
//    int age;
//    double weight;
//    char name[10];
//};
//
//int main()
//{
//    struct student stu[3] = {
//        {18,70.1,"abc"},
//        {19,60.5,"daf"},
//        {20,58.9,"ija"},
//    };//结构体数组，数组每个元素是一个结构体变量
//
//
//
//
//    return 0;
//}

//----------------------------------------练习10.5---------------------------------------------------

//int test(int* arr, int n)
//{
//    int i = 0;
//    int max = *arr;
//    int min = *arr;
//    for (i = 0; i < n; i++)
//    {
//        if (max < *(arr + i))
//        {
//            max = *(arr + i);
//        }
//        if (min > *(arr + i))
//        {
//            min = *(arr + i);
//        }
//    }
//    return max - min;
//
//}
//
//int main()
//{
//    int arr[6] = { 1,2,3,4,5,10 };
//    printf("%d\n", test(arr, 6));
//    test(arr, 6);
//    return 0;
//}

//--------------------------------------------练习10.6-----------------------------------------------
//倒序数组
//void reverse(int* start, int* end)
//{
//    int tmp = 0;
//    while (start < end)
//    {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//        start++;
//        end--;
//    }
//}
//
//int main()
//{
//    int arr[6] = { 1,2,3,4,5,6 };
//    reverse(arr, arr + 6 - 1);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//------------------------------------------冒泡排序-----------------------------------------------
//void sort(int *arr,int n)//由小到大
//{
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
// 
// 
//    int* start = arr;
//    for (i = 0; i < n-1; i++)
//    {
//        arr = start;
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (*arr > *(arr + 1))
//            {
//                tmp = *arr;
//                *arr = *(arr + 1);
//                *(arr + 1) = tmp;
//            }
//            arr++;
//        }
//    }
//}
//
//int main()
//{
//    int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//    sort(arr,10);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
