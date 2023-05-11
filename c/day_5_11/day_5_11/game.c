#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void boardDisplay(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	printf("-----扫雷游戏----\n");
	for (i = 0; i < COLS - 1; i++)
	{//列号
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < ROWS - 1; i++)
	{
		printf("%d ", i);//行号
		int j = 0;
		for (j = 1; j < COLS - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = EASY_COUNT;
	while (n > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			n--;
		}
	}
}

char getCount(char mine[ROWS][COLS], int x, int y)
{
	char ret = 0;
	int i = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			ret += mine[i][j];
		}
	}
	return  ret - 8 * '0';
}

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count < row* col - EASY_COUNT)
	{
		printf("请输入您要排查的位置:");
		scanf("%d %d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("很遗憾, 你被炸死了\n");
			boardDisplay(mine, ROWS, COLS);
			break;
		}
		else if (x >= 1 && y >= 1 && x <= 9 && y <= 9 && mine[x][y] == '0')
		{
			char ret = 0;
			ret = getCount(mine, x, y);
			show[x][y] = ret;
			boardDisplay(show, ROWS, COLS);
			count++;
		}
		else
		{
			printf("输入的坐标非法, 请重新输入!!!!\n");
		}
	}
	if (count == row * col - EASY_COUNT)
	{
		printf("恭喜你, 排雷成功!!\n");
		boardDisplay(mine, ROWS, COLS);
	}
	
}
