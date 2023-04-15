#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "abc";
//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	//printf("%d\n", sizeof(arr));
//
//	return 0;
//}




//int Fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * Fac(x - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int i = 0;
//	//int ret = 1;
//	//for (i = 1;i <= n;i++)
//	//{
//	//	ret = ret * i;
//	//}
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}



//找第i个斐波那契数
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(x - 1) + fib(x - 2);
//	}
//
//}
int fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	int n = fib(i);
	printf("第%d个斐波那契数是%d\n", i, n);
	return 0;
}