#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//输入三个数，从大到小输出
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

void tmp(int * pa ,int * pb,int * pc)
{
	if (* pa < * pb)
	{
		int i = 0;
		i = *pa;
		*pa = *pb;
		*pb = i;

	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	tmp(&a ,&b);
	tmp(&a ,&c);
	tmp(&b ,&c);
	printf("%d %d %d\n", a, b, c);
	return 0;
}  //不对

//找两个数的最大公约数
// ①
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	//假设两个数中小的那个为最大公约数
//	int max = m > n ? n : m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数为：%d\n", max);
//			break;
//		}		
//		max--;
//	}
//	return 0;
//}

//②辗转相除法
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int t;
//	while ( t = m % n )
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//	return 0;
//}


//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{			
//			if (i % j == 0)
//			{
//				break;
//			}
//				
//		}
//		if (j == i / 2 + 1)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	
//
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//假设i是素数
//		for (j = 2; j <= sqrt(i); j++)//sqrt - 开平方，库函数 math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}


//关机程序
//只要运行起来，电脑将在1分钟之内关机，如果输入：我是猪，就取消关机！
//shutdown -s -t 60
//shutdown -a
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	//关机
//	//c语言提供了一个函数：system() -执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("请注意，你的电脑将在1分钟之内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪")== 0) //strcmp - string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//int main()
//{
//	//关机
//	//c语言提供了一个函数：system() -执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system - stdlib.h
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟之内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0) //strcmp - string.h
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//
//	return 0;
//}

//goto语句只能在一个函数范围内跳转，不能跨函数