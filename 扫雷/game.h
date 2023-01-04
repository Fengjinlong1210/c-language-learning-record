#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINENUM 10

void menu();

void game();

void init_board(char arr[ROWS][COLS], int rows, int cols, char ch);

void display_board(char arr[ROWS][COLS], int rows, int cols);

void set_mine(char arr[ROWS][COLS], int rows, int cols, int minenum);

void find_mine(char mine[ROWS][COLS], char show[][COLS], int rows, int cols);

int mine_count(char mine[ROWS][COLS], int rows, int cols, int x, int y);

void expand_board(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
