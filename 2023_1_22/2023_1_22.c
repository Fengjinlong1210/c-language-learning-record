#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	fgets(arr, 10, stdin);//fgets会存储换行符
//	//while (arr[i] != '\n')
//	//	i++;
//	//arr[i] = '\0';
//	//fputs(arr, stdout);
//	printf("%s", arr);
//	return 0;
//}

//结构体传参

//s_gets函数  利用fgets实现
//消除fgets的换行符，并且清空缓冲区

//char* s_gets(char* str, int num)
//{
//	char* start = str;
//	int i = 0;
//	fgets(str, num, stdin);
//	while (*str)
//	{
//		if (*str == '\n')
//			*str = '\0';
//		str++;
//	}
//}

int main()
{
	char arr[10] = { 0 };
	char arr2[10] = { 0 };
	fgets(arr, 10, stdin);
	scanf("%s", arr2);
	printf("%s", arr);
	printf("%s", arr2);

	return 0;
}