#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//-------------------------------------------ð������------------------------------------------------
// �����ԣ�ֻ������һ�����͵�����
//void showarr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void sort(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	showarr(arr, sz);
//	sort(arr, sz);
//	showarr(arr, sz);
//	return 0;
//}

//-----------------------------------------qsort�⺯��--------------------------------------------------
#include <stdlib.h>
void showarr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int mycmp(const void *a, const void *b)		//�Զ��庯��  ��void���ܲ���,�ڽ���ǿ������ת��,���Խ��ܶ������Ͳ���
{
	return *(int*)a - *(int*)b;				//���ؽ����õĽ��,���ݷ���ֵ,qsort�����Ƿ񽻻�
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), mycmp);
	showarr(arr, sz);
	return 0;
}