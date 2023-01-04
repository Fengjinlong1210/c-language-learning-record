#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//---------------------------------------------指针向后移动一个字节----------------------------------------------
//int main()
//{
//	int arr[4] = { 1,2,3,4 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	int* p = (int*)((int)arr + 1);//先转换成int类型，给地址+1，然后再转换成指针，用十六进制打印
//	printf("%0x\n", *p);
//	return 0;
//}

//----------------------------------------------杨氏矩阵查找---------------------------------------------

int search(int (*parr)[4], int* px, int* py, int trgt)
{
	*px = 0;
	*py = 3;
	while (*px <= 3 && *py >= 0)
	{
		if (trgt > *(*(parr + *px) + *py))
		{
			(*px)++;
		}
		else if (trgt < *(*(parr + *px) + *py))
		{
			(*py)--;
		}
		else if (trgt == *(*(parr + *px) + *py))
		{
			//printf("%d %d\n", *px, *py);
			return 1;

		}
		
	}
	//printf("%d %d \n", *px, *py);
	return 0;
}

int main()
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	//1 2 3 4 
	//5 6 7 8 
	//9 10 11 12
	//13 14 15 16
	int x = 3;
	int y = 3;
	int trgt = 0;
	scanf("%d", &trgt);

	int ret = search(arr, &x, &y, trgt);
	if (1 == ret)
	{
		printf("%d %d\n", x + 1, y + 1);
	}
	else if (0 == ret)
	{
		printf("err\n");
	}
	return 0;
}

//---------------------------------------左旋数组----------------------------------------------------
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 9;
//	int n = 0;
//	scanf("%d", &n);
//	for (int j = 0; j < n; j++)
//	{
//		i = 9;
//		int tmp = arr[i];
//		for (i = 9; i > 0; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = tmp;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//--------------------------------------------迷宫-----------------------------------------------
