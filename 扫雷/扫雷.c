#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}

void game()
{
	//�����������̣�һ�����������ף���һ������չʾ��Ϸ����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ���壬һ������'1'��'0'��Ϊ���ף���һ������'*'��Ϊ����
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//չʾ��������
	//display_board(mine, ROWS, COLS);
	display_board(show, ROWS, COLS);

	//���õ���
	set_mine(mine, ROWS, COLS, MINENUM);
	//display_board(mine, ROWS, COLS);

	//�Ų�
	find_mine(mine, show, ROWS, COLS);
}
