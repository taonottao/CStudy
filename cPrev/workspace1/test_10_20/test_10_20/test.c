#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int test()
//{
//	if (1);
//	return 0;
//	printf("hehe\n");
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//100以内的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//		printf("星期一");
//		break;
//	case 2 :
//		printf("星期二");
//		break;
//	case 3 :
//		printf("星期三");
//		break;
//	case 4 :
//		printf("星期四");
//		break;
//	case 5 :
//		printf("星期五");
//		break;
//	case 6 :
//		printf("星期六");
//		break;
//	case 7 :
//		printf("星期天");
//		break;
//	}
//
//	return 0;
//}


//1-5 工作日
//6-7 休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//	case 2 :
//	case 3 :
//	case 4 :
//	case 5 :
//		printf("工作日\n");
//		break;
//	case 6 :
//	case 7 :
//		printf("休息日\n");
//		break;
//	default: //可以放在任何位置，习惯放在末尾
//		printf("非法字符");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//在while中，break直接永久终止循环
//	// 
//	//在while中，continue的作用是跳出本次循环continue后面的代码，
//	//直接去判断部分，看是否进行下一次循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF --  end of file - 文件结束标志
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z - getchar读取结束
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}