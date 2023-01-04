#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//-----------------------------------------Ä£Äâstrlen--------------------------------------------------

//size_t my_strlen(const char* str)
//{
//	assert(str);
//	unsigned int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//size_t __cdecl strlen_my(			//¿âº¯Êý
//	const char* str
//)
//{
//	const char* eos = str;
//
//	while (*eos++);
//
//	return(eos - str - 1);
//}
//
//int main()
//{
//	char arr[10] = "abcdefg";
//	unsigned int ret = strlen_my(arr);
//	printf("%u\n", ret);
//
//	return 0;
//}
//-----------------------------------------sstrcat--------------------------------------------------
#include<string.h>
int main()
{
	char arr1[20] = "Fengjin";
	char arr2[5] = "long";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}