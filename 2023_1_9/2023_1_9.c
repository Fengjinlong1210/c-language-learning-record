#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//-----------------------------字符串函数--------------------------
//strlen
//strcmp  strncmp
//strcat  strncat
//strcpy  strcpy
//strstr

//---------------------------strlen函数----------------------------
//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	const char* end = str;
//	while (*end++);
//	return (end - start - 1);
//}
//
//int main()
//{
//	char arr[] = { "fjdsklf" };
//	int ret = my_strlen(arr);
//	printf("%d \n", ret);
//	return 0;
//}
// 
//---------------------------strcpy/strncpy函数----------------------------
//char* strlen(char* dest, const char* src)//会覆盖原本内容

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (*dest++ = *src++);
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = { "abc"};
//	char arr2[15] = { "fengjinlong" };
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}+		dest	0x00b9fc20 "fengjinlong"	char *


//char* my_strncpy(char* dest, const char* src, int num)
//{
//	char* start = dest;
//	while (num && (*dest++=*src++))//判断时会执行一次
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)//上面已经赋值一次\0，只需再赋值一次
//		{
//			*dest = '\0';
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = {"fengjinlong"};
//	char arr2[10] = { "abc" };
//	char* ret = my_strncpy(arr1, arr2, 5);
//	printf("%s\n", ret);
//	return 0;
//}

//------------------------strcmp\strncmp函数-------------------------------
//int main()
//{
//	char arr1[10] = { "abcdefgh" };
//	char arr2[10] = { "abcde" };
//	int ret = strncmp(arr1, arr2, 6);
//	printf("%d\n", ret);
//	return 0;
//}

//------------------------strcat\strncat函数-------------------------------
//追加字符串

//char* my_strcat(char* dest, const char* src)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//
//char* my_strncat(char* dest, const char* src, int count)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = { "abc" };
//	char arr2[5] = { "def" };
//	//char* ret = my_strcat(arr1, arr2);
//	char* ret = my_strncat(arr1, arr2, 5);
//	printf("%s\n", ret);
//	return 0;
//}

//------------------------strstr函数-------------------------------
char* my_strstr(const char* str1, const char* str2)
{
	int len = strlen(str2);
	int ret = 0;
	while (*str1++)
	{
		ret = strncmp(str1, str2, len);
		if (ret == 0)
		{
			return str1;
		}
	}
	return NULL;
}

int main()
{
	char arr1[20] = { "abcdabcdabcd" };
	char arr2[5] = { "cdasd" };
	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}