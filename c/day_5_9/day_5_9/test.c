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
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("��������");
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����Ƿ�,����������!!!");
		}
	} while (input);

	return 0;
}