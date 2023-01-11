#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//--------------------------memcpy-----------------------------
//void memcpy(void* dest, const void* src, size_t num)
//void my_memcpy(void* dest, const void* src, size_t num)
//{
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//}
//
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	my_memmove(arr1, arr1+3, 20);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//--------------------------模拟实现库函数-----------------------------
//size_t sim_strlen(const char* str)
//{
//	const char* start = str;
//	while (*str++);
//	return (str - start - 1);
//}
//
//char* sim_strcpy(char* dest, const char* src)
//{
//	char* start = dest;
//	while (*dest++ = *src++);
//	return start;
//}
//
//int sim_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;
//	while ((ret = *(unsigned char*)str1 - *(unsigned char*)str2) == 0 && str1)
//	{
//		str1++;
//		str2++;
//	}
//	return (-ret < 0) - (ret < 0);
//}
//
//char* sim_strcat(char* dest, const char* src)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return start;
//}
//
//char* sim_strstr(const char* str1, const char* str2)
//{
//	char* tmp = (char*)str1;
//	char* s1;
//	char* s2;
//	if (!*str2)
//		return str1;
//	while (*tmp)
//	{
//		s1 = tmp;
//		s2 = str2;
//		while (*s1 == *s2 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return s1;
//		}
//		tmp++;
//	}
//	return NULL;
//}

//void func(int n)
//{
//    while (n > 9)
//    {
//        func(n / 10);
//        break;
//    }
//    if (n % 2 == 1)
//    {
//        printf("1");
//    }
//    else
//    {
//        printf("0");
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    func(n);
//    return 0;
//}

//int compare(void* p1, void* p2)
//{
//    return -(*(int*)p1 - *(int*)p2);
//}
//
//int main() {
//    int n = 0;
//    int i = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, sizeof(arr[0]), compare);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//------------------------memset-------------------------------
//void memset(void* ptr, int value, size_t num)

void sim_memset(void* ptr, int value, size_t num)
{
	while (num--)
	{
		*(char*)ptr = value;
		ptr = (char*)ptr + 1;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	sim_memset(arr, 0xff, 20);

	return 0;
}