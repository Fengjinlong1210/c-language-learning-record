#define _CRT_SECURE_NO_WARNINGS 1

#include "contacts.h"

int main()
{
	contact con;
	int input = 0;
	init_contact(&con);
	//�����ļ�����ϵ��


	do 
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case EXIT:
			//�ͷ��ڴ�
			//����������ϵ�˵��ļ�
			serve_contact(&con);
			free_contact(&con);
			break;
		case ADD:
			//������ϵ��
			add_contact(&con);
			//���������������
			break;
		case DEL:
			//�����������Ҳ�ɾ��
			del_contact(&con);
			break;
		case SEARCH:
			//���������Ҳ���ӡ
			srch_contact(&con);
			break;
		case MDFY:
			//����������  ��������
			mdfy_contact(&con);
			break;
		case SHOW:
			//��ӡ������ϵ��
			show_contact(&con);
			break;
		case SORT:
			//����������������
			sort_contact(&con);
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}