#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//#define MAX 100
//
//void find_num(int arr[], int sz)
//{
//	int i = 0;
//	int arr2[50] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		arr2[arr[i]]++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz);
//	return 0;
//}

//--------------------------strncpy-----------------------------
//char* sim_strncpy(char* dest, const char* src, int num)
//{
//	char* start = dest;
//	while (num-- && *src)
//	{
//		*dest++ = *src++;
//	}
//	while (num--)
//	{
//		*dest = '\0';
//	}
//	*dest = '\0';
//	return start;
//}
//
//int main()
//{
//	char str1[] = "xxxxxxxxxxxx";
//	char str2[] = "abcdefg";
//	sim_strncpy(str1, str2, 5);
//	printf("%s\n", str1);
//	return 0;
//}

//--------------------------strncat-----------------------------
char* sim_strncat(char* dest, const char* src, int num)
{
	char* start = dest;
	while (*dest++);
	dest--;
	while (num)
	{
		if (!*src)
			break;
		num--;
		*dest++ = *src++;
	}
	while (num--)
	{
		*dest++ = '\0';
	}
	return start;
}

int main()
{
	char str1[20] = "abcd";
	char str2[] = "efgh";
	sim_strncat(str1, str2, 3);
	printf("%s", str1);
	return 0;
}