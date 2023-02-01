#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//文件的随机读写
//fseek(FILE* stream, long int offset, int origin)
		//流				偏移量			参考位置
//ftell
//返回当前指针位置

//rewind
//重置指针到初始位置

//fflush强制刷新缓冲区
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		char arr[7] = "abcdef";
//		fwrite(arr, sizeof(arr[0]), sizeof(arr), pf);
//		fflush(pf);
//	}
//	FILE* pfr = fopen("test.txt", "r");
//	char arr2[10] = { 0 };
//
//	if (!pfr)
//	{
//		perror("pfr");
//		return 1;
//	}
//	else
//	{
//		fread(arr2, 1, 7, pfr);
//		fflush(pfr);
//	}
//	fclose(pf);
//	fclose(pfr);
//	pf = NULL;
//	pfr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 26; i++)
//		{
//			fprintf(pf, "%c", 'a' + i);
//		}
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[26] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fscanf(pf, "%c", &arr[i]);
//	}
//	fseek(pf, 9, SEEK_SET);
//	for (i = 0; i < 10; i++)
//	{
//		fscanf(pf, "%c", &arr[i + 4]);
//	}
//	/*fflush(pf);*/
//	puts(arr);
//	printf("%d\n", ftell(pf));
//	rewind(pf);
//	printf("%d\n", ftell(pf));
//
//	return 0;
//
//}

//define定义宏
