#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;
//	while ((ret = *(unsigned char*)str1 - *(unsigned char*)str2) == 0 && *str1)
//	{
//		str1++;
//		str2++;
//	}
//	return (-ret < 0) - (ret < 0);
//}
//
//int main()
//{
//	char arr1[20] = { "agcdefg" };
//	char arr2[20] = { "azcdefg" };
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//--------------------------strncat-----------------------------
//char* my_strncat(char* dest, const char* src, int count)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count)
//	{
//		count--;
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = { "abcdefg\0xxxxxx" };
//	char arr2[5] = { "hijk" };
//	char* ret = my_strncat(arr1, arr2, 3);
//	printf("%s\n", ret);
//	return 0;
//}
#include <ctype.h>
//-------------------------stype.h------------------------------
//int main()
//{
//	char ch = '/';
//	int ret = isalnum(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//isalpha
//inalnum
//isdigit
//isgraph
//isspace
//ispunct
//isupper
//islower
//isblank
//iscntrl
//isprint
//isxdigit

//toupper
//tolower