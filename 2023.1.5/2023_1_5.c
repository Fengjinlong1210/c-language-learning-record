#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//----------------------------���������ڴ��еĴ洢---------------------------
//float����  4�ֽ�
//(-1)^s * M * 2^E
// //MΪ�����Ƹ���������1.XXXX��ʾ
//��һλ�洢����λ��0����������1��������
//2~9λ�洢E��ȡֵ��Χ��0~255�������+127��0~127�������η���128~255�������η�
//��23λ�洢M��С������������

//int main()
//{
//	float a = 10;
//	//0000 1010   1.01*2^3
//	//10 = (-1)^0 * 1.01 * 2^3
//	//S=0   M=1.01  E=3
//	//0 10000010 01000000 00000000 0000000
//	//0100 0001 0010 0000 0000 0000 0000 0000
//	//41 20 00 00 
//	return 0;
//}

//int main()
//{
//	int a = 9;//�Ը������洢��
//	float* pa = (float*)&a;
//	*pa = 10.5;
//	//1010.1 == 1.0101 * 2^3
//	//0100 0001 0010 1000 0000 0000 0000 0000
//	//41 28 00 00
//	printf("%d\n", a);
//	printf("%f\n", a);
//
//	return 0;
//}

//�ַ�������
//���о�
//int main()
//{
//	char* arr[5] = { "abcde", "deffa", "bcdfd", "xyzsa", "facds" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p\n", *(&arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int(*pa)[10] = &arr;//[]�������е��������������pa���Ƶ�int����
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	//��[10]ʱ��pa+1����ʮ������
//	return 0;
//}

////-------------------------��ά���鴫��------------------------------
//void init_arr(int arr[][4], int row, int col)//�ö�ά�������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//}
//
//void print_arr(int(*parr)[4], int row, int col)//������ָ�����
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	init_arr(arr, 3, 4);
//	print_arr(arr, 3, 4);
//	return 0;
//}

//-----------------------------����ָ��--------------------------
//int main()
//{
//	int arr[3][4] = { 0 };
//	//arr��������ĵ�һ�У��ǵ�һ�еĵ�ַ
//	int(*p)[4] = &arr;
//	//p��һ������ָ�룬ָ����������ĸ�Ԫ�أ�ÿ��Ԫ����int����
//
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = { 0 };
//	int arr2[3][4] = { 1 };
//	int(*parr[2])[4] = { arr1,arr2 };//����ָ������
//	//parr[2]��ʾparr��һ�����飬int(*)[4]��ʾparr[2]ָ�������������ָ��
//	// ����ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ����int����
//	//
//	printf("%p\n", parr[0]);
//	printf("%p\n", parr[1]);
//	//38  56
//	//parr[0]�ĵ�ַ����parr[1]�ĵ�ַ
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };//�ɵ͵�������
//	return 0;
//}

//------------------------ָ�����鴫��-------------------------------
void test(int* arr[])
{
	//������������ܣ������Ԫ����int*
}

void test2(int** arr)
{
	//Ҳ�����ö���ָ����ܣ���Ϊarr��������Ԫ�ص�ַ//
	//�������Ԫ�ؾ���int*��������int*�ĵ�ַ����һ������ָ��
}

int main()
{
	int* arr[5] = { NULL };
	test(arr);
	test2(arr);
	return 0;
}