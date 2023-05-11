#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define ROWS 11
#define COL 9
#define COLS 11
#define EASY_COUNT 10

//初始化棋盘
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);
//展示棋盘
void boardDisplay(char board[ROWS][COLS], int row, int col);
//布置雷
void setMine(char board[ROWS][COLS], int row, int col);
//排雷
void findMine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
