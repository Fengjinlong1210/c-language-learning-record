#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//函数指针
//函数指针数组
//转移表

//函数指针：指向函数的指针
//int (*pf)(int ,int )
//前面是指针指向函数的返回类型，*表示pf是一个指针，(int ,int )表示函数的参数

//int Add(int x, int y)
//{
//	return x + y;
//}
//printf("Add = %p\n", Add);
//printf("&Add = %p\n", &Add);
//Add与&Add的地址完全相同
//函数名就是函数的地址

//int main()
//{
//	int a = 0, b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//
//	int (*pf)(int, int) = Add;
//	ret = pf(a, b);
//	//ret = (*pf)(a, b);
//	//ret = (*******pf)(a, b);
//	//ret = Add(a, b);
//	
//	//pf是一个函数指针，指向Add函数，pf可以直接调用Add函数，加不加解引用符号皆可
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//-------------------------函数指针数组------------------------------
//int (*pfarr[])(int, char)
//pfarr先和数组结合，说明pfarr是一个数组，数组的元素类型是函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div };
//	//pfarr是一个函数指针数组，有五个元素，每个元素是函数指针类型
//	//函数指针指向的函数有两个参数，每个参数是int类型，返回值也是int类型
//	int ret = pfarr[1](1, 2);
//	//通过数组元素调用函数
//	printf("%d\n", ret);
//	return 0;
//}

//--------------------------转移表模拟计算器-----------------------------
//#include <stdlib.h>
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1. Add ****\n");
//	printf("**** 2. Sub ****\n");
//	printf("**** 3. Mul ****\n");
//	printf("**** 4. Div ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int a = 0, b = 0;
//	
//	int (*pfcacl[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		printf("请选择\n");
//		menu();
//
//		scanf("%d", &input);
//		if (0 == input)
//		{
//			printf("退出\n");
//			break;
//		}
//		if (input >= 1 && input <= 4)
//		{
//			system("cls");
//			printf("请输入两个数\n");
//			scanf("%d %d", &a, &b);
//			ret = pfcacl[input](a, b);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//}

//较复杂的函数指针
//void (* (void (*)()) 0) ) (int)
//把0强制类型转换成函数指针，void(*)()
//访问0地址处的函数

//void ( *signal(int, void (*)(int) ) ) (int)
//signal是一个函数，函数的参数是int，和void(*)(int)的函数指针，这个函数指针的参数是int，返回类型是void

//signal的返回类型也是一个函数指针，该函数指针的参数也是int，返回类型也是void

//typedef void(*pf)(int);
//void (*signal(int, void (*)(int))) (int)就可以改写成
//pf signal(int , pf)

//------------------------指向函数指针数组的指针-------------------------------
//定义一个函数指针数组
//int (*pfarr[4])(int) = { NULL,NULL,NULL,NULL };
//
//int (*(*ppfarr)[4])(int) = pfarr;


//-----------------------回调函数--------------------------------
//函数指针当作另一个函数的参数  案例：qsort函数
//qsort(const void* base,  [目标数组的起始地址]
//		size_t num			[数组长度]
//		size_t size			[数组元素大小，单位是字节]
//		int (*cmp)(const void*, const void*) );		[自定义比较函数，返回值有三种情况]

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), my_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//---------------------------模拟实现qsort----------------------------
//int my_cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int compare(const void* e1, const void* e2)
//{
//	return (*(char*)e1 - *(char*)e2);
//}

//void swap(char* e1, char* e2, int width)//利用char*指针交换每一个字节
//{
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < width; i++)
//	{
//		tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}

//void my_qsort(const void* base, size_t sz, size_t width, int(*compare)(void* e1, void* e2))
//{
//	size_t i = 0;
//	size_t j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//				//强制类型转换char* 只传递第一个字节的地址
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}

//int main()
//{
//	//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	char arr[10] = "gfesdafdb";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), compare);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//qsort排序结构体
//struct Stu
//{
//	char name[20];
//	int age;
//};
//struct Stu a = { "zhangsan",20 };
//struct Stu b = { "lilaoba",50 };
//struct Stu c = { "abcde", 35 };
//
//int stc_cmp(const void* e1, const void* e2)//比较结构体成员
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//
//int main()
//{
//	struct Stu arr[3] = { a,b,c };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), stc_cmp);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i].name);
//	}
//	return 0;
//}

//-------------------------查找杨氏矩阵元素------------------------------
//int check(int arr[][5], int n, int* x, int* y)
//{
//	while (*x <= 4 && *y >= 0)
//	{
//		if (arr[*x][*y] < n)
//		{
//			(*x)++;
//		}
//		if (arr[*x][*y] > n)
//		{
//			(*y)--;
//		}
//		if (arr[*x][*y] == n)
//		{
//			return 1;
//			//printf("%d行，%d列\n", x, y);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[5][5] = {	
//		{1,2,3,4,5},
//		{2,3,4,5,6},
//		{3,4,5,6,7},
//		{4,5,6,7,8},
//		{5,6,7,8,9} 
//	};
//	int n = 0;
//	int x = 0;
//	int y = 4;
//	scanf("%d", &n);
//	int ret = check(arr, n, &x, &y);
//	if (1 == ret)
//	{
//		printf("%d行 %d列\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}

//------------------------左旋字符串-------------------------------
//abcdefg
void rotate_str(char* start, int lenth, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		char tmp = *start;
		for (j = 0; j < lenth - 1; j++)
		{
			*(start + j) = *(start + j + 1);
		}
		*(start + lenth - 1) = tmp;
	}
}

int main()
{
	char str[] = "abcdefg";
	int len = strlen(str);
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	rotate_str(str, len, n);
	printf("%s\n", str);
	return 0;
}