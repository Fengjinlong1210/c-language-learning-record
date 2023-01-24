#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

int main()
{
	contact con;
	int input = 0;
	init_contact(&con);
	//导入文件内联系人


	do 
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case EXIT:
			//释放内存
			//保存现有联系人到文件
			serve_contact(&con);
			free_contact(&con);
			break;
		case ADD:
			//增加联系人
			add_contact(&con);
			//检查容量并且扩容
			break;
		case DEL:
			//输入姓名查找并删除
			del_contact(&con);
			break;
		case SEARCH:
			//按姓名查找并打印
			srch_contact(&con);
			break;
		case MDFY:
			//按姓名查找  重新输入
			mdfy_contact(&con);
			break;
		case SHOW:
			//打印所有联系人
			show_contact(&con);
			break;
		case SORT:
			//按姓名或年龄排序
			sort_contact(&con);
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}