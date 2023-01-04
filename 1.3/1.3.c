#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//----------------------调整奇数和偶数的位置·---------------------------------
//void adjust_arr(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ((arr[j] % 2) == 0 && (arr[j + 1] % 2 == 1))
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,8,10,1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	adjust_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//-----------------------模拟实现strcpy--------------------------------
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* start = dest;
//	while (*dest++ = *src++)
//		;
//	return start;
//}
//
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "xxxxxxxxxxxxxxxxx";
//
//	printf("%s\n", my_strcpy(str2, str1));
//	//char* strcpy(char* dest, const char* src)
//
//	return 0;
//}

//------------------------模拟实现strlen-------------------------------
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcdefgh";
//	printf("%d\n", my_strlen(str));
//	//int strlen(const char* str);
//	return 0;
//}

//--------------------------有序序列判断-----------------------------
//void judge_arr(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//		{
//			count++;
//		}
//		else if (arr[i] <= arr[i + 1])
//		{
//			count--;
//		}
//	}
//	if ((count == n - 1) || (count == -(n - 1)))
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//}
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	judge_arr(arr, n);
//	return 0;
//}

//-------------------------------------------------------
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 0 ; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//		if (tmp < min)
//		{
//			min = tmp;
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//----------------------------合并有序数组---------------------------
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
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[2000] = { 0 };
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	int sz = m + n;
//	for (i = 0; i < m + n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr,sz);
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//-----------------------输出x型--------------------------------
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//-------------------------输出箭头------------------------------
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		//控制行数
		for (i = 0; i < n ; i++)
		{
			//打印空格:空格等于2*行号（最大值） -2*行号（实际值）k
			for (k = 0; k < 2 * n - 2 * i; k++)
			{
				printf(" ");
			}
			//打印星号,每行打印行号(i)个
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		//打印中间的星
		for (i = 0; i <= n; i++)
		{
			printf("*");
		}
		printf("\n");
		//打印下半部分
		for (i = 1; i <= n; i++)
		{
			//空格:每行等于2*行号个
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			//星号:每行为n+1-i
			for (j = 0; j < n + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}