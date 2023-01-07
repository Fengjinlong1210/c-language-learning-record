#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//-----------------------查看str2是否为str1旋转得到的--------------------------------
//int str_check(char* str1, const char* str2)
//{
//	int i = 0;
//	char tmpstr[20] = { 0 };
//
//	strcat(tmpstr, str1);
//	strcat(tmpstr, str1);
//	char* ret = strstr(tmpstr, str2);
//	return (ret != NULL);
//	//if (ret!=NULL)
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return 0;
//}
//
//int main()
//{
//	char str1[10] = { 0 };
//	char str2[10] = { 0 };
//	printf("input string1\n");
//	gets(str1);
//	printf("input string2\n");
//	gets(str2);
//	int ret = str_check(str1, str2);
//	if (1 == ret)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//
//	return 0;
//}

//---------------------------打印空心正方形----------------------------
//void init(char arr[][20], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	char arr[20][20] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		init(arr, 20, 20);
//
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			arr[0][i] = '*';
//			arr[n - 1][i] = '*';
//		}
//		for (i = 0; i < n; i++)
//		{
//			arr[i][0] = '*';
//			arr[i][n - 1] = '*';
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//喝汽水问题
//int main()
//{
//	int n = 0;
//	int money = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	n = money;
//	empty = money;
//	while (empty>1)
//	{
//		n += empty / 2;
//		empty = empty % 2 + empty / 2;
//		empty%2是换完饮料以后剩下来的
//		empty/2是换来的饮料所带来的空瓶
//
//	}
//	printf("%d\n", n);
//	return 0;
//}
//1 3 5