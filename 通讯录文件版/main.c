#define _CRT_SECURE_NO_WARNINGS 1
#include "contacts.h"

//��������
//��ʼ��

int main()
{
	int input = 0;
	contacts con;
	init_struct(&con);
	do
	{
		menu();
		printf("��ѡ��:\n");
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
			printf("�����������������\n");
			break;
		}

	} while (input);
	return 0;
}