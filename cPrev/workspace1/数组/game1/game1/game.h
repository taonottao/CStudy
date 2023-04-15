#pragma once

//头文件的包含
#include <stdio.h>

//关于游戏相关的函数声明，符号声明
//头文件的包含

//符号的定义
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove1(char board[][COL], int row, int col);
void PlayerMove2(char board[][COL], int row, int col);



//判断输赢情况
//1.玩家1赢 - *
//2.玩家2赢 - #
//3.平局 - Q
//4.游戏继续 - C
char IsWin(char board[][COL], int row, int col);
