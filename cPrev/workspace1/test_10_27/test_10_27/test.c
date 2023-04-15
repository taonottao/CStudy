#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//自定义函数和库函数一样，有函数名、返回值类型和函数参数。
//但不一样的是这些都是我们自己设计。这给程序员一个很大的发挥空间
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//把arr2中的元素拷贝到arr1中
//	printf("%s\n", arr1);
//
//	return 0;
//}

//写一个函数，找出两个整数中的最大值。
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("%d\n", max);
//	return 0;
//}



//写一个函数，交换两个变量的内容
//当一个函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a =%d b =%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a =%d b =%d\n", a, b);
//	 
//	return 0;
//} 有问题

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

void Swap(int *pa, int *pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a =%d b =%d\n", a, b);
	Swap(&a, &b);
	printf("交换后：a =%d b =%d\n", a, b);
	 
	return 0;
} 