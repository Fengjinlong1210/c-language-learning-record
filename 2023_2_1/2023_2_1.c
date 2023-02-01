#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//预处理指令

/*
#define MAX 100  //定义常量
#define ext extern  //重命名关键字
#define sz sizeof  //重命名关键字
#define circulation for(int i=0; i<10; i++)\
							printf("%d ", i);
					//定义循环  用又斜杠进行续行
//#define print printf("hello\n")

//进行宏定义时，不要加换行符

//define定义宏
#define ADD(x,y) ((x)+(y))  //定义加法宏
#define print(parament) printf("%d\n",parament);//宏函数
#define SQUARE(x) ((x)*(x))
//定义宏表达式要加上括号，避免操作符优先级影响计算结果
*/

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int s = sz(arr);
//	printf("%d\n", s);
//	circulation;
//	int sum = ADD(10, 20);
//	print(sum);
//	print(SQUARE(sum));//宏的嵌套
//	//调用宏时，先检查参数是否包含#define定义的符号，如果有，优先用值替换#define定义的符号
//	//替换的文本（或者值）被插入到原本的位置
//	//最后对文件再次进行扫描，如果仍包含由#define定义的符号，就重复上述过程
//	return 0;
//}

//-------------------------将参数插入到字符串中
//前提：字符串具有自动连接功能
/*int main()
{
	printf("hello ""world""\n");
	//仍可以输出完整字符串
	return 0;
}
*/

//#define PRINT(FORMAT, value) \
//				printf("The value of "#value " is " FORMAT"\n", value);
////#的作用：把宏参数转换成字符串
//int main()
//{
//	int i = 10;
//	PRINT("%d", i+10);
//	return 0;
//}

//带副作用的宏参数
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	MAX(a++, b++);//使用++会对多次出现的参数造成副作用
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
////#undef用于消除一个宏定义
//#undef MAX

//--------------------------条件编译-----------------------------
//#define DEBUG
//
//int main()
//{
////#undef DEBUG
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d\n", arr[i]);
//#endif // DEBUG
//
//	}
//	return 0;
//}

//头文件的引用
//库函数的头文件用尖括号  #include <stdio.h>
//本地文件用双引号		#include "test.h"
//双引号引用的文件会先从目录下查找，如果目录下没有该文件，继续从库里寻找



//----------------------找出两个不同的数字---------------------
//异或  相同为0 相异为1
//a^a=0  0^a=a

//void find_num(int arr[], int sz)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum ^= arr[i];
//	}
//	//然后把数组分为两组，将两个不同的数字分到不同组(按照这两个数不同的二进制位进行分组)
//	int ret1 = 0, ret2 = 0;
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((sum >> i) & 1) == 1)
//		{
//			//两个数的第i位不同
//			pos = i;//
//			break;
//		}
//	}
//
//	//把不同组的所有数异或得到两个数字
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			ret1 ^= arr[i];
//		}
//		else
//		{
//			ret2 ^= arr[i];
//		}
//	}
//	//再用整体的结果异或两个组的结果，得到这两个数字
//	printf("%d\n", sum ^ ret1);
//	printf("%d\n", sum ^ ret2);
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,5,6 };
//	//先整体进行异或，得到两个不同数异或的结果
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz);
//	return 0;
//}

//--------------------------//实现atoi-----------------------------
//丢弃空格字符
//识别加减法
//识别最前面的数字，遇到非数字字符就停下来  123abc456 只识别前面的123
//如果第一个字符是非数字字符、或空字符串、或只有空白字符，该函数返回0
//如果字符串中的整形越界，返回0
//如果传入空指针，返回0

//#include <ctype.h>
//#include <limits.h>
//enum status
//{
//	INVALID,
//	VALID
//};
//
//enum status st1 = INVALID;
//
//int my_atoi(const char* str)
//{
//	if (!str)
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+' || *str == '-')
//	{
//		if (*str == '-')
//		{
//			flag = -1;
//		}
//		str++;
//	}
//	if (!isdigit(*str))
//	{
//		return 0;
//	}
//	if (*str == '\n')
//	{
//		return 0;
//	}
//	long long num = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			num = 10 * num + (*str - '0');
//			str++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (num > INT_MAX || num < INT_MIN)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		st1 = VALID;
//	}
//	return (int)num * flag;
//
//}
//
//int main()
//{
//	int ret = my_atoi("1231454895156189516");
//	printf("%d\n", ret);
//	if (st1 == INVALID)
//	{
//		printf("INVALID\n");
//	}
//	else
//	{
//		printf("VALID\n");
//
//	}
//	return 0;
//}


//---------------------------宏实现offsetof----------------------------
//显示结构体的偏移量，利用指针减法

//struct test
//{
//	char a;
//	int b;
//	char c;
//	double d;
//};
//
//#define OFFSETOF(type, member_name) (int)&(((type*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct test, a));
//	printf("%d\n", OFFSETOF(struct test, b));
//	printf("%d\n", OFFSETOF(struct test, c));
//	printf("%d\n", OFFSETOF(struct test, d));
//
//	return 0;
//}

//-----------------宏实现交换一个数的奇数位与偶数位-------------
//取出所有奇数位与偶数位
//n&0xaaaaaaaa得到偶数位   n&0x55555555得到奇数位
//偶数位右移/奇数位左移
//相加
#define SWAP(n) ((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1)
#undef SWAP
//int main()
//{
//	int a = 10;
//	printf("%d\n", SWAP(17));
//	//0001 0001
//	//0010 0010
//	return 0;
//}


char* sim_strncat(char* dest, const char* src, int n)
{
	char* start = dest;
	while (*dest++);
	dest--;
	while (n-- && (*dest++ = *src++))
	{
		;
	}
	return start;
}

char* sim_strncpy(char* dest, const char* src, int n)
{
	char* start = dest;
	while (n-- && (*dest++ = *src++))
	{
		;
	}
	*dest = '\0';
	return start;
}

int main()
{
	char arr[10] = "abcde";
	char arr2[5] = "fgh";
	sim_strncpy(arr, arr2, 2);
	printf("%s\n",arr);
	return 0;
}