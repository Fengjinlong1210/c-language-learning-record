#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void* sim_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//	sim_memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//-----------------------�ṹ������--------------------------------
// �ṹ������
// struct tag
// {
//		struct member;
// }variable;
// 
// �����ṹ������
// struct 
// {
//		int name;
//		char ch;
// }p;				//ֻ������������
// 
// 
// --------------------------�ṹ��������
//��Ҫʹ��ָ��
//struct test
//{
//	int a;
//	struct test* next;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct test));
//	return 0;
//}

// -----------typedef

//typedef struct
//{
//	int a;
//	char ch;
//}test;
//
//test s1 = { 1,'a' };
//
//int main()
//{
//	printf("%d %c\n", s1.a, s1.ch);
//	return 0;
//}
//
// --------------- �ڴ����
//�ڶ���������ʼ���뵽������������������
//�����������Ǳ�����Ĭ�ϵĶ����������ı��������е���Сֵ
//�ṹ����ܴ�С�Ƕ�������������

//struct test1
//{
//	char ch1;
//	int a;
//	char ch2;
//};
//
//struct test2
//{
//	char ch1;
//	char ch2;
//	int a;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct test1));
//	printf("%d\n", sizeof(struct test2));
//
//	return 0;
//}

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int num = 0;
    int arr[100000] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num]=num;
    }
    for (i = 0; i < 100000; i++)
    {
        if (arr[i])
        {
            printf("%d ", arr[i]);
        }
    }
}