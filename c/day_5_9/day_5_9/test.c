#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("*****************************\n");
	printf("*******    1. play     ******\n");
	printf("*******    0. exit     ******\n");
	printf("*****************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("玩三子棋");
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入非法,请重新输入!!!");
		}
	} while (input);

	return 0;
}