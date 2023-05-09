#pragma once

#include <stdio.h>

#define ROW 3
#define COL  3

//游戏内容
void game();

//初始化棋盘
void initBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void boardDisplay(char board[ROW][COL], int row, int col);

//玩家下棋
void playerMove(char board[ROW][COL], int row, int col);
