#pragma once

#include<stdio.h>
#include<windows.h>
#include<conio.h>


#define ROW1 6
#define COLS1 12
#define ROW2 18
#define COLS2 36

void menu()
{
	printf("============================\n");
	printf("############################\n");
	printf("#########  迷宫游戏  #######\n");
	printf("########  输入1 开始  ######\n");
	printf("########  输入0 退出  ######\n");
	printf("######## WASD控制移动 ######\n");
	printf("============================\n");
}

void game1();

void game2();

void show_arr();

void move();

void show_arr2();

void move2();