
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


/*
int arr[5];				//��������
int* parr1[10];			//ָ������
int(*parr2)[10];		//����ָ�룬ָ���������飬������10��Ԫ�أ�����Ԫ����int����			//����ָ��int (*)[]
int(*parr3[10])[5];		//����ָ�����飬����Ԫ��������ָ��(10������ָ��)��ÿ������ָ��ָ��5��Ԫ�ص����飬int����
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

                                          //����ָ���ʹ��

//void print(int(*p)[4], int r, int c)	//���庯��  ����������arr��Ԫ�ص�ַ������{1,2,3,4}�ĵ�ַ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//��p+i�����õõ���p+i��������Ԫ�ص�ַ
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

                                      //һά����Ĵ���

//void print(int arr[5])			//��һ��
//{										arr[i] == *(arr+i)
//}
//
//void print(int arr[])				//�ڶ���
//{										����������ʡ��
//
//}
//
//void print(int* arr)				//������  ֱ�Ӵ���ַ
//{
//
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr);//��Ԫ�ص�ַ
//	return 0;
//}


                                           //ָ�����鴫��

//void test(int* arr)
//{
//	//��������Ԫ�ص�ַ
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

                                             //��ά���鴫��
//void test(int arr[][4])
//{
//	//����ʡ���У�����ʡ���У�����Ҫ֪��һ���ж���Ԫ�أ�
//}

//void test(int(*arr)[4])
//{
//	//������ָ�����
//	printf("%p\n", *arr);
//	printf("%p\n", *arr+1);
//	printf("%p\n", *(arr + 1));
//	printf("%d\n", **arr);
//}

//void test(int **arr)
//{
//	//��������ָ�벻�Ƕ���ָ��
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5 },{3,4,5,6} };
//	test(arr);
//	return 0;
//}

//--------------------------------------------��ϰ10.2----------------------------------------

//void mycopy1(double target[],const double source[], int n)//��һ�ַ�����ֱ������������
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        target[i] = source[i];
//    }
//}
//
//void mycopy2(double* target, const double* source, int n)//���������ַ
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        *target++ = *source++;
//    }
//}
//
//void mycopy3(double *target,const double *source , double* end)//��ַ
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

//--------------------------------------------��ϰ10.3-----------------------------------------------
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

//---------------------------------------��ϰ10.4----------------------------------------------------
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
//����i+ii+iii+...��ǰn��
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

//�ṹ��

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
//    };//�ṹ�����飬����ÿ��Ԫ����һ���ṹ�����
//
//
//
//
//    return 0;
//}

//----------------------------------------��ϰ10.5---------------------------------------------------

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

//--------------------------------------------��ϰ10.6-----------------------------------------------
//��������
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
//------------------------------------------ð������-----------------------------------------------
//void sort(int *arr,int n)//��С����
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
