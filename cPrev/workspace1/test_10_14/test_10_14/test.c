#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//注释使用来解释复杂代码的
//


/*
不支持嵌套注释
*/ 

int main()
{
	int  input = 0 ;
	//printf("到了大学你是否选择好好学习?(1/0)\n");
	scanf("%d", &input);
	if (input == 1)
		{
			printf("好offer\n");
		}
	else
		{
			printf("搬砖\n");
		}
	return 0;
}
////
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	if (i > 10)
//		sum = ++i;
//	else
//		sum = --i;
//	printf("sum=%d",sum);
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("继续写代码%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//		printf("好offer");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1 , num2);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//数组 - 一组相同类型的元素的集合
//	//数组是用下标来访问的
//	//把10个整型1-10存起来
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	return 0;
//}