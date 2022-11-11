#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//1.assert的用法(断言)  评估表达式是否正确，如果错误，返回诊断信息同时中断程序
// 头文件<assert.h>   无返回值
//2.const的用法
//


//创造一个函数实现字符串拷贝

//void string_copy(char* dest, char* sour)	//第一版
//{
//	while (*sour != '\0')
//	{
//		*dest= *sour;
//		dest++;
//		sour++;
//		
//	}
//	*dest = *sour;
//}

//void string_copy(char* dest, char* sour)
//{
//	while (*dest++ = *sour++)			//先解引用后++，当遇到\0时，表达式的值为0，（赋值表达式的值为左值）
//		;								//空语句
//}

//char* string_copy(char* dest, const char* sour)//const防止原字符串被修改，防止等式写反
//{												//返回char类型的地址
//	assert(sour);								//(断言，防止源地址是空指针)
//	char* ret = dest;							//存放dest的原地址
//	while (*dest++ = *sour++)
//		;
//	return ret;									//返回dest的原地址
//}
//
//int main()
//{
//	char arr1[10] = { "abcdefg" };
//	char arr2[6] = { "nmlgb" };//数组要大于字符串一个单位来存储'\0’	
//	printf("%s\n", string_copy(arr1, arr2));//函数的链式访问，用返回值作为函数的参数
//	return 0;
//}


//const的使用

//int mystrlen(const char* str)		//const贴近char
//{
//	assert(str);
//	int count = 0;
//	
//	while (*str++ != '\0')
//		count++;
//	
//	return count;
//}
//
//int main()
//{
//	//模拟实现strlen
//	char arr[10] = "abcdefg";
//	printf("%d\n", mystrlen(arr));
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	//int* const pa = &a;		//const修饰pa，pa的指向不能发生变化（cnost在*右侧）
	//int* const pa = &a;			//但*pa的值可以通过地址进行改变
	
	const int* pa = &a;			//const在*左侧，pa的指向可以被改变
	//*pa = 20;//错误			//pa指向的值不能被改变（const修饰*pa）
	pa = &b;//正确

	const int* const pa = &a;	//pa的指向和pa指向的值都不能被改变

	return 0;
}