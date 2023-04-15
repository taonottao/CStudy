#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("请输入你的经验值：");
//		scanf("%d", &a);
//		if (a < 100)
//			printf("筑基期\n");
//		else if (a >= 100 && a < 200)
//		{
//			printf("金丹期\n");
//			printf("算是入门\n");
//		}
//		else if (a >= 200 && a < 300)
//			printf("玄升期\n");
//		else if (a >= 300 && a < 400)
//			printf("大罗金仙\n");
//		else
//			printf("仙帝\n");
//		
//	return 0;
//}

int main()
{
	int a = 1;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");//什么都不打印,因为else有就近原则
	return 0;
}