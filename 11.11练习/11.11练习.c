#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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
