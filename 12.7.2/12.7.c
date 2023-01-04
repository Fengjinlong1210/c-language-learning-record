#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>



//char* my_strcat(char* dst, char* src)
// {
//	char* cp = dst;
//    while (*cp)
//		++cp;          
//	/* Find end of dst */          
//	while (*cp++ = *src++);
//              /* Copy src to end of dst */
//    return(dst);
//}
//
//char* my_strncat(char* dest, const char* src, int n)
//{
//	char* tmp = dest;
//	int i = 0;
//	while (*tmp)
//	{
//		tmp++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		*tmp++ = *src++;
//	}
//
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "Fengjin";
//	char arr2[5] = { 'l','o','n','g' };
//	
//	//printf("%s\n", my_strcat(arr1, arr2));
//	char *ret = 0;
//	ret = my_strncat(arr1, arr2, 4);
//	printf("%s\n", ret);
//
//	return 0;
//}

#define ROW 6
#define COLS 10

//void init_arr(char arr[][COLS], int row, int cols)
//{
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < row; i++)
//	//{
//	//	for (j = 0; j < cols; j++)
//	//	{
//	//		arr[i][j] = ' ';
//	//	}
//	//}
//	//for (i = 0; i < COLS; i++)
//	//{
//	//	arr[0][i] = '#';
//	//	arr[ROW - 1][i] = '#';
//	//}
//	//for (j = 1; j <= ROW-1; j++)
//	//{
//	//	arr[j][0] = '#';
//	//	arr[j][COLS - 1] = '#';
//	//}
//	
//	arr[3][3] = '0';
//}
//
//void show_arr(char arr[][COLS], int row, int cols)
//{
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void move(char arr[][COLS], int row, int cols)
//{
//	int x = 1; 
//	int y = 1;
//	arr[x][y] = '0';
//
//	while (arr[4][9] != '0')
//	{
//		char ch = _getch();
//		if ('w' == ch)
//		{
//			if (arr[x - 1][y] != '#')
//			{
//				arr[x][y] = ' ';
//				x--;
//				arr[x][y] = '0';
//			}
//		}
//		if ('s' == ch)
//		{
//			if (arr[x + 1][y] != '#')
//			{
//				arr[x][y] = ' ';
//				x++;
//				arr[x][y] = '0';
//			}
//		}
//		if ('a' == ch)
//		{
//			if (arr[x][y - 1] != '#')
//			{
//				arr[x][y] = ' ';
//				y--;
//				arr[x][y] = '0';
//			}
//		}
//		if ('d' == ch)
//		{
//			if (arr[x][y + 1] != '#')
//			{
//				arr[x][y] = ' ';
//				y++;
//				arr[x][y] = '0';
//			}
//		}
//		system("cls");
//
//		show_arr(arr, ROW, COLS);
//	}
//	if (arr[4][9] == '0')
//	{
//		printf("win\n");
//	}
//}
//
//int main()
//{
//	char arr[ROW][COLS] = {
//		"##########",
//		"#0#  #   #",
//		"#  ##  # #",
//		"## #   # #",
//		"##   ###  ",
//		"##########",
//
//	};
//
//	//init_arr(arr, ROW, COLS);
//	show_arr(arr, ROW, COLS);
//	while (1)
//	{
//		move(arr, ROW, COLS);
//		break;
//	}
//
//	return 0;
//}

