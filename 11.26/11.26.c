#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ����
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 7-i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < i; k++)
//		{
//			printf("*");
//		}
//		for (k = 0; k < i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 6; i>0; i--)
//	{
//		for (j = 0; j < 7-i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <i; k++)
//		{
//			printf("*");
//		}
//		for (k = i-1; k >0; k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ַ�������
//int main()
//{
//			//˫���������������ݱ���Ϊָ�룬ָ���ַ����洢λ�ã�
//	char *str1 = "abcdefg";
//	printf("%p\n", str1);		//�ַ�ָ��str��"abcdefg"��ͬһ��ռ�洢
//	printf("%p\n", "abcdefg");
//
//	printf("%c\n", *str1);
//	printf("%c\n", *"abcdefg");			//�ַ�������"abcdefg"�洢�ھ�̬��
//
//
//	return 0;
//}
//---------------------------------------�������ַ���������ַ----------------------------------------------------
//#define STR "helle world"
//int main()
//{
//	char str1[] = STR;
//	char* pstr = STR;
//	printf("%p\n", STR);
//	printf("%p\n", "helle world");
//	printf("%p\n", pstr);
//	printf("%p\n", str1);//��ͬ
//								//ǰ���ߵ�ַ��ͬ�������뾲̬����ʹ�õ��ڴ治ͬ
//	return 0;
//}

//----------------------------------------�ַ���������ַ���ָ�������---------------------------------------
//int main()
//{
//	char arr[] = "abcdefg";
//	const char* str = "abcdefg";
//	printf("%s\n", str);//str��ʾ�ַ�����Ԫ�ص�ַ
//	printf("%s\n", arr);
//	
//	//�����������ʾ��
//	putchar(arr[5]);
//	putchar(str[5]);
//
//	//������ָ���ʾ��
//	putchar(*(arr + 2));
//	putchar(*(str + 2));
//
//	//��������
//	//putchar(*(arr++));	//����arr���ǿ��޸ĵ���ֵ
//	putchar(*(str++));		//���ԣ�str��ָ�����
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------
//int main()
//{
//	unsigned char a = 267;
//	//100001011
//	char b = 256;//(-128~127)
//	//100000000
//	
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//�������������������ٽض�

//--------------------------------------��ӡ�������-----------------------------------------------------
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 5 1
//
//void init(int arr[10][10], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= r; i++)
//	{
//		for (j = i; j <= i; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0; i < r; i++)
//	{
//		arr[i][0] = 1;
//	}
//}
//
//void show(int arr[10][10], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//void calculate(int arr[10][10], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//}
//
//int main()
//{
//	int arr[10][10] = { 0 };
//
//	//��ʼ��
//	init(arr, 10, 10);
//	//չʾ
//	//show(arr,10,10);
//	//����
//	calculate(arr,10,10);
//	show(arr, 10, 10);
//
//	return 0;
//}

//------------------------------------���ƶ�ά����--------------------------------------------------
//#define ROWS 10
//#define COLS 10
//
//void mycopy(const int(*source)[COLS], int(*target)[COLS], int rows, int cols)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			*(*(target + i) + j) = *(*(source + i) + j);
//		}
//	}
//}
//
//void show(int(*arr)[COLS], int rows, int cols)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void init(int arr[10][10], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <ROWS ; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//
//}
//
//int main()
//{
//	int source[ROWS][COLS] = { 0 };
//	int target[ROWS][COLS] = { 0 };
//	init(source, ROWS, COLS);
//	mycopy(source, target, ROWS, COLS);
//	show(target, ROWS, COLS);
//	return 0;
//}

//----------------------------------------��ϰ10.8---------------------------------------------------i
//void copy(int* start, int* end, int* tagt)
//{
//	while (start < end)
//	{
//		*tagt = *start;
//		tagt++;
//		start++;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int tagt[3] = { 0 };
//	copy(arr+2,arr+5,tagt);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", tagt[i]);
//	}
//	return 0;
//}

//---------------------------------------��ϰ10.10----------------------------------------------------
void Add(int* add1, int* add2, int* sum, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		*(sum + i) = *(add1+i)+*(add2+i);
	}
}

int main()
{
	int i = 0;
	int add1[5] = { 1,2,3,4,5 };
	int add2[5] = { 2,4,6,8,10 };
	int sum[5] = { 0 };

	Add(add1, add2, sum, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", sum[i]);
	}
	return 0;
}