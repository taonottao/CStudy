#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int  num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}



//函数的嵌套调用和链式访问
//链式访问：把一个函数的返回值作为另一个函数的参数。
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "wang";
//	////strcpy(arr1,  arr2);//①
//
//	//printf("%s\n", strcpy(arr1, arr2));//②
//	//printf返回的数据是int型，返回的为打印在屏幕上字符的个数。
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下----告知
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}



#include "Add.h"
#include "sub.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}





//int main()
//{
//	printf("hehe");
//	main();
//
//	return 0;
//}



void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//%u表示无符号整型
	//递归 - 函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位

	return 0;
}