#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 4
#define COLS 2

#include<stdio.h>

//��ά���鴫��

//void print(int(*pa)[COLS], int r, int c)
//{			//pa������ָ�룬ָ��arr�������飬��ŵ���arr��������ĵ�ַ���൱��&arr
//			//��pa���н����ã��õ�arr����Ԫ�أ���Ԫ����һ����������int���͵�����
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(pa+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[ROW][COLS] = { {1,2},{3,4},{5,6},{7,8} };
//	print(arr, ROW, COLS);
//	return 0;
//}

//int (*parr)[n] = arr;
//arr[m][n]==*(*(parr+m)+n)
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr��ʾ������Ԫ�ص�ַ
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr + 1);//&arr��ʾarr��������ĵ�ַ��&arr+1����������飨����Ȩ����arr��һ����
//
//
//	return 0;
//}

//��������ʾ������Ԫ�ص�ַ
//���������⣺
//1.��sizeof��������ʱ����������ʾ��������		sizeof(arr)
//2.&����������ȡ��������������ĵ�ַ			&arr


//����ָ���ָ������
int main()
{
	int arr[4][2] = { {1,2} ,{3,4},{5,6},{7,8} };
	int(*parr)[2] = arr;		//parr��ŵ���arr[0]�ĵ�ַ��arr[0]={1,2}��

	printf("%p\n", parr);
	printf("%p\n", parr+1);		//parr+1��ʾarr[1]�ĵ�ַ

	//arr��������Ԫ�ص�ַ��������Ԫ����{1 ,2 },����arr��ֵ����&arr[0]
	printf("%p\n", arr+1);    //arr+i == &arr[i]
	printf("%p\n", &arr[1]);

	//arr[0]������arr[0][0]����������Ԫ�ص�ַ������arr[0] == &arr[0][0]
	printf("%p\n", arr[1]);				//arr[i] == &arr[i][0]
	printf("%p\n", &arr[1][0]);

	return 0;
}

//����Ĵ��Ρ���11.25���
