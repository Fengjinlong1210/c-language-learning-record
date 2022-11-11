#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>
#include<windows.h>

int main()
{

	char arr2[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请输入我是猪，否则电脑将在一分钟内关机!\n");
	scanf("%s", arr2);

	int ret = 1;
	ret=strcmp(arr2,"我是猪");
	//printf("%d\n", ret);
	if (0 == ret)
	{
		system("shutdown -a");
		printf("关机已取消\n");
	}
	else
		goto again;
	return 0;
}

//	system("shutdown -s -t 60");    //电脑关机指令 -s表示设置  -t表示时间  60秒
//again:
//	printf("请注意，你的电脑将在一分钟内关机，请输入“我是猪”解除关机\n");
//	scanf("%s", input);
//	
//	if (strcmp(input, "我是猪") == 0)   //strcmp 比较两个字符串是否相等
//	{
//		system("shutdown -a");
//		printf("哈哈哈哈哈哈哈啊\n");
//		printf("笑死啦\n");
//	}