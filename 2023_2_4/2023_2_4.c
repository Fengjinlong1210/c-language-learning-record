#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------------------------leetcode 27.-------------------------------
//移除数组中的元素
//int findPosition(int* nums, int count, int val)
//{
//    int i = 0;
//    for (i = 0; i < count; i++)
//    {
//        if (nums[i] == val)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void delete(int* nums, int count, int pos)
//{
//    int i = 0;
//    for (i = 0; i < count - pos - 1; i++)
//    {
//        nums[pos + i] = nums[pos + 1 + i];
//    }
//}
//
//int removeElement(int* nums, int numsSize, int val) {
//    int count = numsSize;
//    int pos = 0;
//    int ret = findPosition(nums, count, val);
//    while (ret != -1)
//    {
//        delete(nums, count, ret);
//        count--;
//        ret = findPosition(nums, count, val);
//    }
//    return count;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,2,3 };
//    int numsSize = sizeof(arr) / sizeof(arr[0]);
//    int ret = removeElement(arr, numsSize, 2);
//    ret = removeElement(arr, numsSize, 3);
//
//    int i = 0;
//    for (i = 0; i < ret; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//	return 0;
//}

//双指针
//int removeElement(int* nums, int numsSize, int val)
//{
//	int p = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != val)
//		{
//			nums[p++] = nums[i];
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	int arr[] = { 1,2,2,2,3,4,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = removeElement(arr, sz, 2);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//------------------------leetcode 26.-------------------------------
//删除有序数组重复项

//int removeDuplicates(int* nums, int numsSize) {
//    //双指针
//    int src = 0;
//    int dst = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[src] == nums[dst])
//        {
//            src++;
//        }
//        else
//        {
//            nums[++dst] = nums[src++];
//        }
//    }
//    return dst + 1;
//}
//
//int main()
//{
//    int nums[] = { 1,1,2,2,3,3,4,4 };
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    int ret = removeDuplicates(nums, sz);
//    for (int i = 0; i < ret; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//    return 0;
//}

//-------------------------------------------------------

//	1.D
//int main()
//{
//	char a = 101; //-128~127
//	int sum = 200;
//	a += 27; 
//	//-128
//	//1000 0000
//	sum += a;
//	//1111 1111 1111 1111 1111 1111 1000 0000
//	//0000 0000 0000 0000 0000 0000 1100 1000
//	//0000 0000 0000 0000 0000 0000 0100 1000
//	printf("%d\n", sum);
//	return 0;
//}

// 2.D
//int main()
//{
//	int value = 1024;
//	//0000 0000 0000 0000 0000 0100 0000 0000
//	//0x00 00 04 00
//	char condition = *((char*)(&value));
//	if (condition)
//		value += 1; 
//	condition = *((char*)(&value));
//	
//	if (condition) 
//		value += 1;
//	condition = *((char*)(&value));
//	
//	printf("%d %d", value, condition);
//	return 0;
//}

//3.A
//void func(char para[100])
//{
//	void* p = malloc(100);
//	printf("%d, %d\n", sizeof(para), sizeof(p));
//}
//
//int main()
//{
//	char a[100] = { 0 };
//	func(a);
//	return 0;
//}

//4.c
//void func(char* p) 
//{ 
//	p = p + 1; 
//}
//	
//int main()
//{
//	char s[] = { '1', '2', '3', '4' };
//	func(s);
//	printf("%c", *s);
//	return 0;
//}

//int main()
//{
//    //0 1 5 6 
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i <= n; i++)
//    {
//        if ((i % 10 == 0) || (i % 10 == 1) || (i % 10 == 5) || (i % 10 == 6))
//        {
//            int m = i * i;
//            if (m == i || m % 10 == i || m % 100 == i || m % 1000 == i ||
//                m % 10000 == i || m % 100000 == i)
//            {
//                count++;
//            }
//        }
//    }
//    printf("%d\n", count);
//}

int isprime(int num)
{
	int i = 0;
	if (num == 1 || num == 0)
	{
		return 0;
	}
	for (i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count += isprime(i);
	}
	printf("%d\n", count);
	return 0;
}