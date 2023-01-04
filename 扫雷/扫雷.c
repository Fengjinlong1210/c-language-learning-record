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
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}

void game()
{
	//创建两个棋盘，一个用来布置雷，另一个用来展示游戏界面
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋，一个放置'1'和'0'作为地雷，另一个放置'*'作为棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//展示两个数组
	//display_board(mine, ROWS, COLS);
	display_board(show, ROWS, COLS);

	//布置地雷
	set_mine(mine, ROWS, COLS, MINENUM);
	//display_board(mine, ROWS, COLS);

	//排查
	find_mine(mine, show, ROWS, COLS);
}
