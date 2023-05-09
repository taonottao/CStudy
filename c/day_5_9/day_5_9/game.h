#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

//电脑下棋
void computerMove(char board[ROW][COL], int row, int col);

//isWin: 判断棋局状态
//1. 返回 '*' , 玩家赢
//2. 返回 '#', 电脑赢
//3. 返回 'Q' , 平局
//4. 返回 'C' , 游戏继续
char isWin(char board[ROW][COL], int row, int col);