#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ļ�����
//���ļ���ŵ������У����ݿ��У�
//Ϊ�����ݵĳ־û�

//�ļ���Ϊ�����ļ��������ļ�
//�����ļ���Դ�����ļ���Ŀ���ļ�����ִ�г���
//�����ļ�����������ʱ��д������

//�ļ�����·��+�ļ���+��׺

//fgetc   fputc
//fgets   fputs
//fprintf  fscanf
//fread   fwrite

//int main()
//{
//	//�ļ�ָ��
//	FILE* pf = NULL;
//	//ͨ���ļ�ָ���ҵ���������ļ�
//	//ʹ��fopen���ļ�
//	//FILE* fopen(const char* filename, const char* mode)
//	//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen:");
//		return 1;
//	}
//	char arr[] = "abcdefg";
//	char arr2[10] = { 0 };
//	fputs(arr, pf);
//	
//	//fgets(arr2, 5, pf);
//	//puts(arr2);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	fgets(arr, 5, pf);//����\0
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//	else 
//	{
//		for (i = 0; i < 26; i++)
//		{
//			fputc('a' + i, pf);
//		}
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		while ((ch = fgetc(pf)) != EOF)
//		{
//			printf("%c ", ch);
//		}
//	}
//	return 0;
//}

//printf   scanf
//��׼���롢�����
//fprintf  fscanf
//ָ���ļ���
//sprintf  sscanf
//��ȡ/�洢���ݵ��ַ�����

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fprintf(pf, "%d %s %c", 30, "hello", 'a');
//		fclose(pf);
//	}
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fscanf(pf, "%d %s %c", &a.a, &a.arr, &a.ch);
//		fclose(pf);
//	}
//	printf("%d %s %c\n", a.a, a.arr, a.ch);
//	return 0;
//}

//fprintf��sscanf

//int main()
//{
//	char arr[50] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fprintf(pf, "%d %s %c", 10, "hahaha", 'a');
//		//����ʽ�����pf
//		fclose(pf);
//	}
//	pf = NULL;
//	return 0;
//}

//struct file
//{
//	int a;
//	char arr[10];
//	char ch;
//};
//
//struct file* psf;
//
//int main()
//{
//	char arr1[50] = { 0 };
//	char arr2[50] = { 0 };
//	struct file a = { 10, "abcdefg", 'a' };
//	sprintf(arr1, "%d %s %c", (a.a), a.arr, (a.ch));
//	//��ʽ��д�����ݵ��ַ���
//	struct file b = { 0 };
//	sscanf(arr1, "%d %s %c", &b.a, b.arr, &b.ch);
//	//���ַ����и�ʽ����ȡ����
//	return 0;
//}

//fread  fwrite

//int main()
//{
//	char arr[50] = { "fengjinlong" };
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fwrite(arr, sizeof(arr[0]), sizeof(arr), pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[50] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fread(arr, sizeof(arr[0]), 10, pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

typedef struct people
{
	int age;
	char name[20];
	char phnum[12];
}people;

people a = { 10, "zhangsan", "123456789" };
people b = { 20, "wanwu", "987654321" };

//int main()
//{
//	people arr[2] = { a,b };
//	FILE* pf = fopen("text.txt", "wb");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fwrite(arr, sizeof(people), 2, pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

int main()
{
	people arr[2] = { 0 };
	FILE* pf = fopen("text.txt", "rb");
	if (!pf)
	{
		perror("fopen");
	}
	else
	{
		fread(arr, sizeof(arr[0]), 2, pf);
		fclose(pf);
		pf = NULL;
	}
	printf("%d %s %s\n", arr[0].age, arr[0].name, arr[0].phnum);
	printf("%d %s %s\n", arr[1].age, arr[1].name, arr[1].phnum);

	return 0;
}