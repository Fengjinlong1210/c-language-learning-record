#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>
#include<windows.h>

int main()
{

	char arr2[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("������������������Խ���һ�����ڹػ�!\n");
	scanf("%s", arr2);

	int ret = 1;
	ret=strcmp(arr2,"������");
	//printf("%d\n", ret);
	if (0 == ret)
	{
		system("shutdown -a");
		printf("�ػ���ȡ��\n");
	}
	else
		goto again;
	return 0;
}

//	system("shutdown -s -t 60");    //���Թػ�ָ�� -s��ʾ����  -t��ʾʱ��  60��
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ��������롰����������ػ�\n");
//	scanf("%s", input);
//	
//	if (strcmp(input, "������") == 0)   //strcmp �Ƚ������ַ����Ƿ����
//	{
//		system("shutdown -a");
//		printf("����������������\n");
//		printf("Ц����\n");
//	}