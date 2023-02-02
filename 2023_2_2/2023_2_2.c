#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//--------------------------寻找最短的步长到Fibonacci数-----------------------------
//0 1 1 2 3 5 8 13 21 34 55 89
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f1 = 0;
//	int f2 = 1;
//	while (1)
//	{
//		int f3 = f1 + f2;
//
//		if (n == f2 || n == f3)
//		{
//			printf("0\0");
//			break;
//		}
//		else if (n > f2 && n < f3)
//		{
//			int tmp = 0;
//			tmp = ((n - f2) > (f3 - n)) ? f3 - n : n - f2;
//			printf("%d\n", tmp);
//			break;
//		}
//		else if (n > f3)
//		{
//			f1 = f2;
//			f2 = f3;
//		}
//	}
//	return 0;
//}

//将字符串中的空格替换成%20
//#include <string.h>
//
//char* replace_blank(char* str, int lenth)
//{
//	char* cp = str;
//	char* start = str;
//	int space_count = 0;
//	while (*str)
//	{
//		if (*str == ' ')
//			space_count++;
//		str++;
//	}
//	char* end1 = cp + lenth - 1;
//	char* end2 = cp + lenth - 1 + 2 * space_count;
//	while (end1 != end2)
//	{
//		if (*end1 != ' ')
//		{
//			*end2-- = *end1--;
//		}
//		else
//		{
//			*end2-- = '0';
//			*end2-- = '2';
//			*end2-- = '%';
//			end1--;
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	char arr[100] = "happy new year haha";
//	int lenth = strlen(arr);
//	puts(replace_blank(arr, lenth));
//
//	return 0;
//}

//clock函数
#include <time.h>

//int main()
//{
//	int i = 0;
//	long start = clock();
//	for (i = 0; i < 100000000; i++)
//	{
//		;
//	}
//	long end = clock();
//	printf("%dms\n", end - start);
//	return 0;
//}

//strchr

//-------------------------leetcode17.04------------------------------
//int MissingNumber(int* num, int numssize)
//{
//	int count = numssize + 1;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < count; i++)
//	{
//		ret ^= i;
//	}
//	for (i = 0; i < numssize; i++)
//	{
//		ret ^= num[i];
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", MissingNumber(arr, sz));
//	return 0;
//}

//-------------------------leetcode 189------------------------------
//右旋数组
void rotate1(int* arr, int sz, int n)
{
	if (n >= sz)
	{
		n %= sz;
	}
	while (n)
	{
		int tmp = arr[sz - 1];
		memmove(arr + 1, arr, sizeof(int)*(sz-1));
		*arr = tmp;
		n--;
	}
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void rotate2(int* arr, int sz, int n)
{
	//两次逆序
	if (n >= sz)
	{
		n %= sz;
	}
	reverse(arr, sz);
	reverse(arr, n);
	reverse(arr + n, sz - n);
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int n = 0;
	scanf("%d", &n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	rotate2(arr, sz, n);
	//reverse(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}