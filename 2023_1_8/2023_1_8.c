#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//------------------------打印杨辉三角-------------------------------
//#define ROW 10
//#define COL 10
//
//void init_arr(int arr[][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//		}
//		arr[i][0] = 1;
//	}
//
//}
//
//void eval_arr(int arr[][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < ROW; i++)
//	{
//		for (j = 1; j < COL; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//}
//
//void print_arr(int arr[][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW ; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10][10] = { 0 };
//	init_arr(arr);
//	eval_arr(arr);
//	print_arr(arr);
//	return 0;
//}

//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (((A == 3)+(B == 2))==1 &&
//							((B == 2)+(E == 4))==1 &&
//							((C == 1)+(D == 2))==1 &&
//							((C == 5)+(D == 3))==1 &&
//							((E == 4)+(A == 1)) == 1)
//						{
//							if (A * B * C * D * E == 120)
//							{
//								printf("%d %d %d %d %d \n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int k = 0;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)
//		{
//			printf("%c\n", k);
//		}
//	}
//
//	return 0;
//}

//------------------------指针习题-------------------------------
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));			//16
//	printf("%d\n", sizeof(a + 0));		//4
//	printf("%d\n", sizeof(*a));			//4
//	printf("%d\n", sizeof(a + 1));		//4
//	printf("%d\n", sizeof(a[1]));		//4
//	printf("%d\n", sizeof(&a));			//4/8
//	printf("%d\n", sizeof(*&a));		//16  (4)
//	printf("%d\n", sizeof(&a + 1));		//4/8
//	printf("%d\n", sizeof(&a[0]));		//4/8
//	printf("%d\n", sizeof(&a[0] + 1));	//4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//
//	printf("%d\n", sizeof(arr));			//6
//	printf("%d\n", sizeof(arr + 0));		//4		arr+0是一个地址
//	printf("%d\n", sizeof(*arr));			//1     拿到第一个元素
//	printf("%d\n", sizeof(arr[1]));			//1
//	printf("%d\n", sizeof(&arr));			//4/8
//	printf("%d\n", sizeof(&arr + 1));		//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));	//4/8
//	printf("%d\n", strlen(arr));			//随机
//	printf("%d\n", strlen(arr + 0));		//随机
//	//printf("%d\n", strlen(*arr));			//err
//	//printf("%d\n", strlen(arr[1]));			//err
//	//printf("%d\n", strlen(&arr));			//随机
//	printf("%d\n", strlen(&arr + 1));		//随机-6
//	printf("%d\n", strlen(&arr[0] + 1));	//随机-1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";					//常量字符串包含\0
//	printf("%d\n", sizeof(arr));			//7
//	printf("%d\n", sizeof(arr + 0));		//4/8
//	printf("%d\n", sizeof(*arr));			//1
//	printf("%d\n", sizeof(arr[1]));			//1
//	printf("%d\n", sizeof(&arr));			//4/8
//	printf("%d\n", sizeof(&arr + 1));		//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));	//4    arr+1
//	printf("%d\n", strlen(arr));			//6
//	printf("%d\n", strlen(arr + 0));		//6
//	//printf("%d\n", strlen(*arr));			//err
//	//printf("%d\n", strlen(arr[1]));		//err
//	printf("%d\n", strlen(&arr));			//6
//	printf("%d\n", strlen(&arr + 1));		//随机
//	printf("%d\n", strlen(&arr[0] + 1));	//5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";					//常量字符串
//	printf("%d\n", sizeof(p));			//4/8
//	printf("%d\n", sizeof(p + 1));		//4/8
//	printf("%d\n", sizeof(*p));			//1
//	printf("%d\n", sizeof(p[0]));		//1
//	printf("%d\n", sizeof(&p));			//4/8
//	printf("%d\n", sizeof(&p + 1));		//4/8
//	printf("%d\n", sizeof(&p[0] + 1));	//4/8
//
//	printf("%d\n", strlen(p));			//6
//	printf("%d\n", strlen(p + 1));		//5
//	//printf("%d\n", strlen(*p));			//err
//	//printf("%d\n", strlen(p[0]));		//err
//	printf("%d\n", strlen(&p));			//随机
//	printf("%d\n", strlen(&p + 1));		//随机
//	printf("%d\n", strlen(&p[0] + 1));	//5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				//48
//	printf("%d\n", sizeof(a[0][0]));		//4
//	printf("%d\n", sizeof(a[0]));			//16   4/8
//	printf("%d\n", sizeof(a[0] + 1));		//4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4
//	printf("%d\n", sizeof(a + 1));			//4/8
//	printf("%d\n", sizeof(*(a + 1)));		//16  arr[1]
//	printf("%d\n", sizeof(&a[0] + 1));		//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//?  16   *(a+1)
//	printf("%d\n", sizeof(*a));				//16
//	printf("%d\n", sizeof(a[3]));			//?  16    *(a+3)
//	return 0;
//}

//-------------------------------------------------------
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//2 5
//	return 0;
//}

//struct Test
//{
//	int Num;   
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//&p+20
//	printf("%p\n", (unsigned long)p + 0x1);//&p+1
//	printf("%p\n", (unsigned int*)p + 0x1);//&p+4
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//01 00 00 00 
//	//02 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//数组首元素地址向后移动一个字节
//	//00000002
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//4  
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//1 3 5 0 0 0
//	int* p;
//	p = a[0];//
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	// 00000 00000 00000 00000 00(0)00
//	// 0000 0000 0000 0000 00(0)0
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//&*(*(p+4)+2)-&*(*(a+4)+2)  ==  -4
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//跳过整个数组
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10  5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	//POINT
//	printf("%s\n", *-- * ++cpp + 3);
//	//EW
//	printf("%s\n", *cpp[-2] + 3);
//	//
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//1  6
//	return 0;
//}

//------------------------qsort练习-------------------------------
#include <stdlib.h>
//void print_arr(char** ptr, int sz)
//{
//	int i = 0; 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", *(ptr+i));//*(ptr+i)
//	}
//	printf("\n");
//}

//int int_sort(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int char_sort(const void* p1, const void* p2)
//{
//	return (*(char*)p1 - *(char*)p2);
//}
//
//int str_sort(const void* p1, const void* p2)
//{
//	return strcmp((char*)p1, (char*)p2);
//}
//
//int stuc_sort(const void* p1, const void* p2)
//{
//	return strcmp((char*)p1, (char*)p2);
//}
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//
//struct stu a = { "jack",50 };
//struct stu b = { "amark",20 };
//struct stu c = { "zniko",45 };
//
//void print_arr(struct stu* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", (ptr+i)->name);//*(ptr+i)
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//整形排序
//	//int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), int_sort);
//
//	//char排序
//	//char arr[10] = { 'x','y', 'z', 'd', 'a', 'b', 'w', 'h', 'y', 'p' };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), char_sort);
//
//	//字符串排序
//	//char* arr[5] = { "abc", "fsj", "gew", "jiom", "oqe" };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), str_sort);
//
//	//结构体排序
//	struct stu arr[3] = { a,b,c };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	qsort(arr, sz, sizeof(arr[0]), stuc_sort);
//	print_arr(arr, sz);
//	return 0;
//}

//-------------------------模拟qsort------------------------------
int int_sort(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void print_arr(int* ptr, int sz)
{
	int i = 0; 
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(ptr+i));//*(ptr+i)
	}
	printf("\n");
}

void swap(char* p1, char* p2, int width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void my_qsort(const void* base, int num, int width, int (*compare)(const void*, const void*))
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			//判断
			if (compare((char*)base+j*width, (char*)base+(j+1)*width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), int_sort);
	print_arr(arr, sz);
	return 0;
}