#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("****** 1. 开始  ******\n");
	printf("****** 0. 退出  ******\n");
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
	//打印行号
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
		//输入坐标
		printf("请输入排查的坐标\n");
		scanf("%d %d", &x, &y);
		
		//判断坐标是否越界
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			//判断坐标是否被占用
			if (show[x][y] != '*')
			{
				printf("该坐标已经排查过，请重新输入\n");
				continue;
			}
			//判断坐标是否为地雷，若是地雷，游戏结束

			if (mine[x][y] == '0')
			{
				//若不是地雷，展示周围的地雷个数,count++
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
				printf("踩到地雷，游戏结束\n");
				display_board(mine, ROWS, COLS);
				printf("\n");
				break;
			}
		}
		else
		{
			printf("坐标越界，请重新输入\n");
		}
		//循环，直到找出所有的地雷
	}
	if (count == ROW * COL - MINENUM)
	{
		system("cls");
		printf("胜利\n");
		display_board(mine, ROWS, COLS);
		printf("\n");
	}
}

//未解决
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
	//判断坐标是否越界
	if (x == 0 || y == 0 || x == ROWS || y == COLS)
	{
		return;
	}
	//判断坐标是否被排查
	if (mine[x][y] != '0')
	{
		return;
	}
	//若x，y周围有地雷，将该坐标替换为地雷数量
	count = mine_count(mine, ROWS, COLS, x, y);
	if (count > 0)
	{
		show[x][y] = '0' + count;
		//system("cls");
		display_board(show, ROWS, COLS);
		return;
	}
	//若x，y周围没有地雷，扩展周围的区域
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