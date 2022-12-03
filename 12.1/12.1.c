#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[] = "abcdef";//7
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	
//	//strlen(const char* str)只接受char类型指针
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err   
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//12随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5从第二个开始
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";//首字符地址
//	printf("%d\n", sizeof(p));	//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//随机值   4  ///////////
//	printf("%d\n", sizeof(&p[0] + 1));//1  4
//	//&*(p+0)+1 <==> p+1;指针
//
//	
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//3(随机)///////////
//	printf("%d\n", strlen(&p + 1));//随机//////////
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//-------------------------------------------------------------------------------------------
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]整个数组
//	printf("%d\n", sizeof(a[0] + 1));//4/8   地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//16   4
//	printf("%d\n", sizeof(a + 1));//随机值   4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//随机值   4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//4/8    16
//	printf("%d\n", sizeof(a[3]));//4/8    16
//	return 0;
//}

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    //printf("%p %p\n", a, &a);
//    return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


//&a[m][n]==(*(a+m)+n)
//int main()
//{
//    int a[5][5]; //{0,0,0,0,0   0,0,0,0,0   0,0,0,0,0   0,0,0,0,0   0,0,0,0,0}
//    int(*p)[4];//{0,0,0,0   0,0,0,0,   0,0,0,0,   0,0,0,0   0,0,0,,0}
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//-4
//
//    //10000000 00000000 00000000 00000100
//    //11111111 11111111 11111111 11111011
//    //11111111 11111111 11111111 11111100
//    //F   F    F   F    F   F    F   C
//    return 0;
//}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	//ENTER\0NEW\0POINT\0FIRST\0
	char** cp[] = { c + 3,c + 2,c + 1,c };
	//FIRST\0POINT\0NEW\0ENTER\0
	char*** cpp = cp;
	//&(c+3)
	printf("%s\n", **++cpp);//**(c+2)   POINT
	printf("%s\n", *-- * ++cpp + 3);  //ENTER
	printf("%s\n", *cpp[-2] + 3);		//point
	printf("%s\n", cpp[-1][-1] + 1);	//*(*(cpp-1)-1)+1
	return 0;
}