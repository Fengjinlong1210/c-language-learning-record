#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*******************\n");
	printf("**** 1. start  ****\n");
	printf("**** 0.  end   ****\n");
	printf("*******************\n");
}

void game()
{
	//创建二维数组
	char board[ROW][COL] = { 0 };

	//初始化数组
	init_board(board, ROW, COL);

	//打印棋盘
	print_board(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		ret = 0;
		//玩家下棋
		player_move(board, ROW, COL);
		ret = judge_win(board, ROW, COL);
		judge_end(ret, board);
		if (ret != 'c')
		{
			break;
		}
		Sleep(1000);
		//电脑下棋
		computer_move(board, ROW, COL);
		ret=judge_win(board, ROW, COL);
		judge_end(ret,board);
		if (ret != 'c')
		{
			break;
		}
	}

}

void init_board(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		int k = 0;
		if (i < row - 1)
		{
			for (k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void player_move(char board[][COL], int row, int col)
{
	//输入坐标
	int x = 0;
	int y = 0;

	
	//判断是否合法
	while (1)
	{
		printf("玩家下棋,");
		printf("请输入坐标:\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				//落子
				board[x - 1][y - 1] = 'O';
				system("cls");
				break;
			}
			//判断是否被占用
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("输入越界，请重新输入\n");
		}

	}
}

void computer_move(char board[][COL], int row, int col)
{
	//随机生成坐标
	int x = 0;
	int y = 0;
	printf("电脑下棋:\n");
	//判断坐标能否使用
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}

}

char judge_win(char board[][COL], int row, int col)
{
	int i = 0;
	char ret = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!=' ')
		{
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[1][1] == board[0][2] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	return judge_draw(board, row, col);
}

char judge_draw(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	return 'q';
}

void judge_end(char ret,char board[ROW][COL])
{
	print_board(board, ROW, COL);

	if (ret != 'c')
	{
		system("cls");
		print_board(board, ROW, COL);
		if (ret == 'q')
		{
			printf("平局\n");
		}
		else if (ret == 'O')
		{
			printf("玩家胜利\n");
		}
		else if (ret == 'X')
		{
			printf("电脑胜利\n");
		}
	}
}