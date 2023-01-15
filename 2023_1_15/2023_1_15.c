#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//strerror
//返回错误码所指向的字符常量指针

//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	return 0;
//}

//perror

//int main()
//{
//	char* str = (char*)malloc(100);
//	if (!str)
//	{
//		perror("str:");//若返回空指针则报错
//	}
//	else
//	{
//		//statement
//		printf("ok\n");
//	}
//	return 0;
//}
//errno

//通讯录内存版