#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//1.assert���÷�(����)  �������ʽ�Ƿ���ȷ��������󣬷��������Ϣͬʱ�жϳ���
// ͷ�ļ�<assert.h>   �޷���ֵ
//2.const���÷�
//


//����һ������ʵ���ַ�������

//void string_copy(char* dest, char* sour)	//��һ��
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
//	while (*dest++ = *sour++)			//�Ƚ����ú�++��������\0ʱ�����ʽ��ֵΪ0������ֵ���ʽ��ֵΪ��ֵ��
//		;								//�����
//}

//char* string_copy(char* dest, const char* sour)//const��ֹԭ�ַ������޸ģ���ֹ��ʽд��
//{												//����char���͵ĵ�ַ
//	assert(sour);								//(���ԣ���ֹԴ��ַ�ǿ�ָ��)
//	char* ret = dest;							//���dest��ԭ��ַ
//	while (*dest++ = *sour++)
//		;
//	return ret;									//����dest��ԭ��ַ
//}
//
//int main()
//{
//	char arr1[10] = { "abcdefg" };
//	char arr2[6] = { "nmlgb" };//����Ҫ�����ַ���һ����λ���洢'\0��	
//	printf("%s\n", string_copy(arr1, arr2));//��������ʽ���ʣ��÷���ֵ��Ϊ�����Ĳ���
//	return 0;
//}


//const��ʹ��

//int mystrlen(const char* str)		//const����char
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
//	//ģ��ʵ��strlen
//	char arr[10] = "abcdefg";
//	printf("%d\n", mystrlen(arr));
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	//int* const pa = &a;		//const����pa��pa��ָ���ܷ����仯��cnost��*�Ҳࣩ
	//int* const pa = &a;			//��*pa��ֵ����ͨ����ַ���иı�
	
	const int* pa = &a;			//const��*��࣬pa��ָ����Ա��ı�
	//*pa = 20;//����			//paָ���ֵ���ܱ��ı䣨const����*pa��
	pa = &b;//��ȷ

	const int* const pa = &a;	//pa��ָ���paָ���ֵ�����ܱ��ı�

	return 0;
}