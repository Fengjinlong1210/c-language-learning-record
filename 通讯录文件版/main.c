#define _CRT_SECURE_NO_WARNINGS 1
#include "contacts.h"

//创建变量
//初始化

int main()
{
	int input = 0;
	contacts con;
	init_struct(&con);
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case add:
			//add
			add_contact(&con);
			break;
		case del:
			//delete
			dele_contact(&con);
			break;
		case search:
			//search
			search_contact(&con);
			break;
		case sort:
			//sort
			sort_contact(&con);
			break;
		case show:
			//show
			show_contact(&con);
			break;
		case mdfy:
			//mdfy
			mdfy_contact(&con);
			break;
		case Exit:
			save_contact(&con);
			free_contact(&con);
			//exit
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}