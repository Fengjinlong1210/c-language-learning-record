#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap_arr(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	swap_arr(arr1, arr2, sz);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void init_arr(int* arr, int sz, int num)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(arr + i) = num;
//	}
//}
//
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//void reverse_arr(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init_arr(arr, sz, 1);
//	print_arr(arr, sz);
//	reverse_arr(arr, sz);
//	print_arr(arr, sz);
//
//}

//-----------------------ð������--------------------------------
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//--------------------------�������-----------------------------

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//-------------------------����ת�ô�ӡ-----------------------------
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//������
//-------------------------------------------------------
//
//1.����������
// +
// -
// *
// /  ����/�����õ��Ļ���������������/��������||��������/������||��������/���������õ����Ǹ�����
// %  ȡ������ֻ�ܶ���������ʹ��

//int main()
//{
//
//	printf("%f\n", 10.0 / 20);
//	return 0;
//}

//2.��λ������
// <<  >>
//�Զ�����λ���ƻ����ƣ��ƶ����룩
//�����൱�ڳ�2�������൱�ڳ�2
//���Ʒ�Ϊ�������ƺ��߼�����
//�������Ʊ�������λ����߲�����λ
//�߼����Ʋ���������λ����߲�0

//int main()
//{
//	int a = -10;
//
//	//10000000 00000000 00000000 00001010ԭ��
//	//11111111 11111111 11111111 11110101����
//	//11111111 11111111 11111111 11110110����
//	//a = a << 1;
//	//00000000 00000000 00000000 00010100
//	//a = a >> 1;
//
//	//11111011
//	//00000100
//	//00000101
//	
//	printf("%d\n", a);
//	return 0;
//}

//3.��ֵ������
// =��+=��-=��*=��/=  %=  >>=  <<=  &=  |=  ^=

//int main()
//{
//	int a = 10;
//	a &= 1;
//	printf("%d\n", a);
//	return 0;
//}

//4.��Ŀ������
// ����*�������ã���&��ȡ��ַ����++��--��sizeof
// ���߼�ȡ��

//int main()
//{
//	int a = -5;
//	int b = 10;
//	printf("%d\n", !b);
//	printf("%d\n", !a);
//	return 0;
//}
void size_arr(int arr[])
{
	printf("%d\n", sizeof(arr));
}

void size_arr2(char arr[])
{
	printf("%d\n", sizeof(arr));//ָ���С
}

int main()
{
	int arr[10] = { 0 };
	char arr2[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr2));
	size_arr(arr);
	size_arr2(arr2);
	return 0;
}

//5.λ������
// ^����λ��򣩡�|����λ�򣩡�&����λ�룩

//������е��������Բ���洢��

//int main()
//{
//	//&(��λ��)����������λ�룬��0Ϊ0
//	// |����λ�򣩣���1Ϊ1
//	// ^��λ�����ͬΪ0������Ϊ1
//	//a^a=0
//	//a^0=a
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	int b = 0;
//	//00000000 00000000 00000000 00000000
//	b = a ^ 0;
//	printf("%d\n", b);
//	return 0;
//}

//------------------------��λ��򽻻�������-------------------------------
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//00001010
//	//00010100
//	//00011110
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//------------------------��һ������������λ��1�ĸ���-------------------------------
//int main()
//{
//	//ֻ�ܼ�������
//	int a = 12;
//	//0111 1011
//	int count = 0;
//	while (a)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = -15;
//	int count = 0;
//	while (a)
//	{
//		if ((a % 2) == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num &= (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//6.��ϵ������
// >  <  =  >=  <=  ==
//7.�߼�������
// &&  || 
//8.����������(��Ŀ2������)
// ����
//9.���ű��ʽ
// ���ű��ʽ�������Ҽ��㣬�������ʽ��������һ�����ʽ�Ľ��