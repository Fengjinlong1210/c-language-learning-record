#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//-----------------------------------------�ص�����--------------------------------------------------
//����ָ����Ϊ��һ�������Ĳ���


//ģ�������

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	printf("please enter a number\n");
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &input);
//	//���庯��ָ������
//	int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
//
//	printf("enter number\n");
//	scanf("%d %d", &a, &b);
//	int ret = 0;
//	ret = parr[input](a, b);//parr[]���ú���,()���д���
//	printf("ret = %d\n", ret);
//	return 0;
//}

//----------------------------------------------qsort---------------------------------------------

//void show(const void* arr, int sz, int width)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((char*)arr+(i*width)));
//	}
//}
//
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;			//����
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	show(arr, sz, sizeof(arr[0]));
//	return 0;
//}

//-------------------------------------------ģ��ʵ��qsort------------------------------------------------
//int cmp_int(const void* a, const void* b)	//����
//{
//	return *(int*)a - *(int*)b;				//ͨ������ֵ�������������
//											//����,���ش���0������
//											//����,����С��0������
//}
//
//void show(const void* arr, int sz, int width)//��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((char*)arr+(i*width)));//ǿ������ת����char*ָ��,(i+width)���Ʒ���Ȩ��
//	}
//}
//
//void swap(char* a, char* b,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = 0;						//������ַ����
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//	}
//}
//
//void simulate_qsort(void* base, int sz, int width, int (*cmp_int)(void* a, void* b))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j=0; j < sz - 1 - i; j++)
//		{
//			if (cmp_int((char*)base + (j * width),(char*)base + (j + 1) * width) > 0)
//			{
//				//����arr[j] <==> arr[j+1]
//				swap((char*)base + (j * width), (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	simulate_qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	show(arr, sz, sizeof(arr[0]));
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------
