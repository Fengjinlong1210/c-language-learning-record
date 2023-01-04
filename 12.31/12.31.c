#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//操作符

//整型提升
//char short

//逻辑与//逻辑或
//int main()
//{
//	int a = 0, b = 1, c = 2, d = 3;
//	//
//	// int i = a++ && ++b && d++;
//	//逻辑与一旦遇到零，就停止后面的计算
//
//	int i = a++ || ++b || d++;
//	//逻辑或遇到1，停止后面的计算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//	return 0;
//}

////--------------------------下标引用-----------------------------
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	//arr[i] <==> *(arr+i) <==> *(i+arr) <==> i[arr]
//	printf("%d\n", arr[5]);
//	printf("%d\n", 5[arr]);
//	printf("%d\n", *(arr+5));
//	printf("%d\n", *(5+arr));
//	return 0;
//}

//------------------------结构体成员访问操作符-------------------------------
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct stu s = { "fengjinlong",21 };
//	struct stu* p = &s;
//	printf("name=%s age=%d\n", s.name, s.age);
//	printf("name=%s age=%d\n", p->name,p->age);
//
//	return 0;
//}

//----------------------------整型提升--------------------------
//表达式：由一系列操作数和运算符组成的序列，一个表达式也可以没有运算符
//最简单的表达式可能只有一个常量或变量
//在表达式运算时，会把类型字节大小小于int的类型提升为int类型，在CPU中进行计算

//有符号整形在进行整型提升时，前面补符号位
//无符号整形补0
//int main()
//{
//	unsigned char a = 255;//-127
//	//00000000 00000000 00000000 11111111
//	//10000001
//	unsigned int b=0xFFFFFFFF;
//	//11111111 11111111 11111111 11111111补码
//	char c = a + b;
//	unsigned char* pa = &a;
//	int* pb = &b;
//	printf("%u\n", *pa);
//	//00000000 00000000 00000000 11111111
//	//11111111 11111111 11111111 00000001补码
//	//
//	printf("%u\n", *pb);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xff;
//	short b = 0xffff;
//	int c = 0xffffffff;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	if (a == 0xff)//发生整型提升，a=0xffffffff, a=-1
//	{
//		printf("%x\n", a);
//	}
//	
//	if (b == 0xffff)
//	{
//		printf("%x\n", b);
//	}	
//	
//	if (c == 0xffffffff)
//	{
//		printf("%x\n", c);
//	}
//	return 0;
//}

//int main()
//{
//	char c = 255;
//	//
//	//printf("%u\n", sizeof(c));
//	//printf("%u\n", sizeof(+c));//表达式进行运算
//	//printf("%u\n", sizeof(-c));
//	printf("%d\n", c);
//	return 0;
//}

//---------------------------打印二进制补码----------------------------
//void swap_binary(unsigned int n)
//{
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d", (n & (1 << 31))>>31);
//		n <<= 1;
//	}
//}
//
//int main()
//{
//	int a = 20;//4,294,967,295
//	swap_binary(a);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6, c=6
//	b = ++c, c++, ++a, a++;// c=8  a=8  b=7
//	b += a++ + c;//b=b+7+8  a=9
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//----------------------统计二进制中1的个数---------------------------------
int main()
{
	int num = 0;
	int i = 0;
	while (scanf("%d", &num) != EOF)
	{
		int count = 0;

		for (i = 0; i < 32; i++)
		{
			if (num & (1 << i))
			{
				count++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}

//-------------------------求两个数二进制位不同的个数------------------------------
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		int num = n ^ m;
//		int count = 0;
//		while (num)
//		{
//			if (num & 1)
//			{
//				count++;
//			}
//			num = num >> 1;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}