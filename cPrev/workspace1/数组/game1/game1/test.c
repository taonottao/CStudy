#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h" 

//测试游戏的逻辑

void menu()
{
	printf("****************************\n");
	printf("******       1. play        *****\n");
	printf("******       0. exit         *****\n");
	printf("****************************\n");
}

void game()
{
	//存储数据 - 二维数组  
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);

	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接受游戏状态
	while (1)
	{
		//玩家1走
		PlayerMove1(board, ROW, COL); 
		DisplayBoard(board, ROW, COL);
		//判断玩家1是否赢了
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//玩家2走
		PlayerMove2(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家2是否赢了
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家1胜利\n");
	}
	else if (ret == '#')
	{
		printf("玩家2胜利\n");
	}
	else
	{
		printf("平局");
	}
	DisplayBoard(board, ROW, COL);
	
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}