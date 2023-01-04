#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include<stdio.h>
int swh = 0;
int main()
{
	char arr[ROW1][COLS1] = {
		"############",
		"#0# # # ## @",
		"# #     ## #",
		"#  # #  #  #",
		"##   ##   ##",
		"############"
	};
	char arr2[ROW2][COLS2] = {
		"####################################",
		"#0 # # # #      ## ##  ##  #    #  @",
		"#  # # ##  # ##  ##       #   #    #",
		"## # #    ## ### # # ##   #  ###  ##",
		"#   #  ## ##   #  ## #  ###  ##  ###",
		"## ## # #  ## ##     #      ## #  ##",
		"## ##  ##  ##  # ### # #  #  ## # ##",
		"##  ##  ###   #  # # #  ##  ### # ##",
		"##   #  ##  ##  ## # # #  ###  ## ##",
		"## #  # ##  #  ##     ##  ###  #####",
		"#  #   #  # #   # # ## ##  ####  ###",
		"##  ##     ##   # ##  ##  # ####  ##",
		"## # # ##   ##  ##  #  ## ##    ####",
		"###      ## ##  ##  ##  # ##  #  ###",
		"# # #### #       #  ## ##  #  ##  ##",
		"#   # ##   ##  # ###    #   ##  ####",
		"## ##   ## ####       #  #### #   ##",
		"####################################",


	};
	int input = 0;


	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("game\n");
			system("cls");
			printf("########### 游戏开始 ########\n");
			printf("######## 输入1 第一关 #######\n");
			printf("######## 输入2 第二关 #######\n");
			printf("#############################\n");
			int input2 = 0;
			scanf("%d", &input2);
			switch (input2)
			{
			case 1:
				game1(arr,ROW1,COLS1);
				break;
			case 2:
				if (0 == swh)
				{
					printf("请先完成第一关\n");
				}
				if (1 == swh)
				{
					game2(arr2,ROW2,COLS2);
				}
				break;
			default:
				printf("输入有误，请重新输入\n");
				break;
			}
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	system("cls");
	printf("##############游戏结束##########\n");
	system("pause");
	return 0;
}

void game1(char arr[][COLS1],int row,int cols)
{
	show_arr(arr, ROW1, COLS1);
	move(arr, ROW1, COLS1);
	swh = 1;
}

void game2(char arr2[][COLS2],int row, int cols)
{
	show_arr2(arr2, ROW2, COLS2);
	move2(arr2, ROW2, COLS2);
}

void move(char arr[][COLS1], int row, int cols)
{
	int x = 1; 
	int y = 1;
	arr[x][y] = '0';

	while (arr[1][11] != '0')
	{
		char ch = _getch();
		if ('w' == ch)
		{
			if (arr[x - 1][y] != '#')
			{
				arr[x][y] = ' ';
				x--;
				arr[x][y] = '0';
			}
		}
		if ('s' == ch)
		{
			if (arr[x + 1][y] != '#')
			{
				arr[x][y] = ' ';
				x++;
				arr[x][y] = '0';
			}
		}
		if ('a' == ch)
		{
			if (arr[x][y - 1] != '#')
			{
				arr[x][y] = ' ';
				y--;
				arr[x][y] = '0';
			}
		}
		if ('d' == ch)
		{
			if (arr[x][y + 1] != '#')
			{
				arr[x][y] = ' ';
				y++;
				arr[x][y] = '0';
			}
		}
		system("cls");

		show_arr(arr, row, cols);
	}
	if (arr[1][11] == '0')
	{
		printf("win\n");
	}
}

void show_arr(char arr[][COLS1], int row, int cols)
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

void move2(char arr[][COLS2], int row, int cols)
{
	int x = 1;
	int y = 1;
	arr[x][y] = '0';

	while (arr[1][35] != '0')
	{
		char ch = _getch();
		if ('w' == ch)
		{
			if (arr[x - 1][y] != '#')
			{
				arr[x][y] = ' ';
				x--;
				arr[x][y] = '0';
			}
		}
		if ('s' == ch)
		{
			if (arr[x + 1][y] != '#')
			{
				arr[x][y] = ' ';
				x++;
				arr[x][y] = '0';
			}
		}
		if ('a' == ch)
		{
			if (arr[x][y - 1] != '#')
			{
				arr[x][y] = ' ';
				y--;
				arr[x][y] = '0';
			}
		}
		if ('d' == ch)
		{
			if (arr[x][y + 1] != '#')
			{
				arr[x][y] = ' ';
				y++;
				arr[x][y] = '0';
			}
		}
		system("cls");

		show_arr2(arr, row, cols);
	}
	if (arr[1][35] == '0')
	{
		printf("win\n");
	}
}

void show_arr2(char arr[][COLS2], int row, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}