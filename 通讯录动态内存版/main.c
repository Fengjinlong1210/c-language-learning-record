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
		case 1:
			//add
			add_contact(&con);
			break;
		case 2:
			//delete
			dele_contact(&con);
			break;
		case 3:
			//search
			search_contact(&con);
			break;
		case 4:
			//sort
			sort_contact(&con);
			break;
		case 5:
			//show
			show_contact(&con);
			break;
		case 6:
			//mdfy
			mdfy_contact(&con);
			break;
		case 0:
			//exit
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
	return 0;
}