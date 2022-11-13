#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//15的二进制
//00000000 00000000 00000000 00001111
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//输出偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ( n>> i) & 1);
//	}
//	printf("\n");
//	//输出奇数位
//	for (i = 30; i >= 0; i -= 2)   //i=0时，向右移动0位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

// 输出一个整数二进制的每一位
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[32] = { 0 };		//存放得到的二进制序列
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)	//	得到二进制的每一位并存入0数组
//	{
//		arr[i] = n % 2;
//		n = n / 2;
//	}
//	for (i = 31; i>=0; i--)			//倒序打印数组，就是正序的二进制序列
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？ 
输入例子:
1999 2299*/

//0111 1100 1111
//1000 1111 1011

//按位异或  相同为0，相异为1
//int num_of_1(int n) //每次可以从后往前去掉一个1
//{
//	int count = 0;
//	while (n > 0)
//	{
//		n = n & (n - 1);//每次去掉一位1
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a ^ b;//异或后的二进制里有多少个1就有多少位不同
//	//计算c中有多少个1
//	printf("%d \n", num_of_1(c));
//}

										//用地址的方法输出二进制
//int main()
//{
//	int a = 458;
//	unsigned char* p1 = (unsigned char*)&a;
//	unsigned char* p2 = (unsigned char*)&a + 1;
//	unsigned char* p3 = (unsigned char*)&a + 2;
//	unsigned char* p4 = (unsigned char*)&a + 3;
//	printf("%p\n", &a);
//	printf("%p  %d\n", p1, *p1);
//	printf("%p  %d\n", p2, *p2);
//	printf("%p  %d\n", p3, *p3);
//	printf("%p  %d\n", p4, *p4);
//
//	return 0;
//}

//static修饰局部变量，该变其生命周期，使其到程序结束，生命周期才结束//未解决

//static修饰全局变量/函数，使其只能在本源文件中使用
//

//编写代码，演示多个字符从两端移动，向中间汇聚。
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "hello sb";
//	char arr2[] = "********";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//	//printf("%d\n", right);
//	printf("%s\n", arr2);
//
//	while (left <= right)
//	{
//		Sleep(500);
//		//system(cls);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//
//
//	return 0;
//}
