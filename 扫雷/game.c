#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("****** 1. ��ʼ  ******\n");
	printf("****** 0. �˳�  ******\n");
	printf("**********************\n");
}

void init_board(char arr[][COLS], int rows, int cols, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = ch;
		}
	}
}

void display_board(char arr[][COLS], int rows, int cols)
{
	int i = 0; 
	int j = 0;
	//��ӡ�к�
	for (i = 0; i < rows - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < rows - 1; i++)
	{
		printf("__");
	}
	printf("\n");
	for (i = 1; i < rows-1 ; i++)
	{
		printf("%d|", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char arr[][COLS], int rows, int cols, int minenum)
{
	int x = 0;
	int y = 0;
	while (minenum)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			minenum--;
		}
	}
}

void find_mine(char mine[][COLS], char show[][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<ROW*COL-MINENUM)
	{
		//��������
		printf("�������Ų������\n");
		scanf("%d %d", &x, &y);
		
		//�ж������Ƿ�Խ��
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			//�ж������Ƿ�ռ��
			if (show[x][y] != '*')
			{
				printf("�������Ѿ��Ų��������������\n");
				continue;
			}
			//�ж������Ƿ�Ϊ���ף����ǵ��ף���Ϸ����

			if (mine[x][y] == '0')
			{
				//�����ǵ��ף�չʾ��Χ�ĵ��׸���,count++
				count++;
				//expand_board(mine, show, x, y);

				int ret = mine_count(mine, ROWS, COLS, x,y);
				show[x][y] = ret + '0';
				system("cls");
				display_board(show, ROWS, COLS);

			}
			else
			{
				system("cls");
				printf("�ȵ����ף���Ϸ����\n");
				display_board(mine, ROWS, COLS);
				printf("\n");
				break;
			}
		}
		else
		{
			printf("����Խ�磬����������\n");
		}
		//ѭ����ֱ���ҳ����еĵ���
	}
	if (count == ROW * COL - MINENUM)
	{
		system("cls");
		printf("ʤ��\n");
		display_board(mine, ROWS, COLS);
		printf("\n");
	}
}

//δ���
int mine_count(char mine[ROWS][COLS], int rows, int cols, int x, int y)
{
	return (mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x - 1][y + 1]
		+ mine[x][y + 1]
		+ mine[x + 1][y + 1]
		+ mine[x - 1][y]
		+ mine[x + 1][y] - 8 * '0');
}

void expand_board(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = 0;
	//�ж������Ƿ�Խ��
	if (x == 0 || y == 0 || x == ROWS || y == COLS)
	{
		return;
	}
	//�ж������Ƿ��Ų�
	if (mine[x][y] != '0')
	{
		return;
	}
	//��x��y��Χ�е��ף����������滻Ϊ��������
	count = mine_count(mine, ROWS, COLS, x, y);
	if (count > 0)
	{
		show[x][y] = '0' + count;
		//system("cls");
		display_board(show, ROWS, COLS);
		return;
	}
	//��x��y��Χû�е��ף���չ��Χ������
	if (0 == count)
	{
		show[x][y] = '0';
		expand_board(mine, show, x - 1, y - 1);
		expand_board(mine, show, x, y - 1);
		expand_board(mine, show, x + 1, y - 1);
		expand_board(mine, show, x - 1, y);
		expand_board(mine, show, x + 1, y);
		expand_board(mine, show, x - 1, y + 1);
		expand_board(mine, show, x , y + 1);
		expand_board(mine, show, x + 1, y + 1);
	}
}