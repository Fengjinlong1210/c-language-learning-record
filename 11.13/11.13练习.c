#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//15�Ķ�����
//00000000 00000000 00000000 00001111
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//���ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ( n>> i) & 1);
//	}
//	printf("\n");
//	//�������λ
//	for (i = 30; i >= 0; i -= 2)   //i=0ʱ�������ƶ�0λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

// ���һ�����������Ƶ�ÿһλ
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[32] = { 0 };		//��ŵõ��Ķ���������
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)	//	�õ������Ƶ�ÿһλ������0����
//	{
//		arr[i] = n % 2;
//		n = n / 2;
//	}
//	for (i = 31; i>=0; i--)			//�����ӡ���飬��������Ķ���������
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ�� 
��������:
1999 2299*/

//0111 1100 1111
//1000 1111 1011

//��λ���  ��ͬΪ0������Ϊ1
//int num_of_1(int n) //ÿ�ο��ԴӺ���ǰȥ��һ��1
//{
//	int count = 0;
//	while (n > 0)
//	{
//		n = n & (n - 1);//ÿ��ȥ��һλ1
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a ^ b;//����Ķ��������ж��ٸ�1���ж���λ��ͬ
//	//����c���ж��ٸ�1
//	printf("%d \n", num_of_1(c));
//}

										//�õ�ַ�ķ������������
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

//static���ξֲ��������ñ����������ڣ�ʹ�䵽����������������ڲŽ���//δ���

//static����ȫ�ֱ���/������ʹ��ֻ���ڱ�Դ�ļ���ʹ��
//

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
