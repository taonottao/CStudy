#pragma once

#define ROW 9
#define COL 9

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define ROWS ROW+2
#define COLS COL + 2
#define EASY_COUNT 10

//≥ı ºªØ∆Â≈Ã
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//¥Ú”°∆Â≈Ã
void DisplayBoard(char[ROWS][COLS], int row, int col);

//≤º÷√¿◊
void SetMine(char mine[ROWS][COLS], int row, int col);

//≈≈≤È¿◊
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
