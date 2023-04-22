#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//void func(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) 
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	func(n);
//
//	return 0;
//}

//void  swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 9;
//	printf("交换前：a = %d  , b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a = %d  , b = %d\n", a, b);
//
//	return 0;
//}

//int judge_year(int y) 
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = judge_year(year);
//	if (ret) {
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//}

#include <math.h>
int judge_num(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int ret = judge_num(i);
		if (ret)
		{
			printf("%d ", i);
		}

	}

	return 0;
}