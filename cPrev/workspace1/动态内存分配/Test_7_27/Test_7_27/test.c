#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//动态内存开辟的常见错误
//1.对空指针的解引用操作
//2.对动态开辟空间的越界访问
//3.使用free释放非动态开辟的空间
//4.使用free释放动态内存中的一部分
//5.对同一块动态内存多次释放
//6.动态开辟内存忘记释放（内存泄漏）


//1.
//int main()
//{
//	int* p = (int*)malloc(1000000000);
//
//	return 0;
//}



//2.
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}


//3.
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4.
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//		if (p == NULL)
//		{
//			return;
//		}
//
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*p++ = i;
//		}
//		free(p);
//		p = NULL;
//
//	return 0;
//}


//5.
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	//使用
//	//释放
//	free(p);
//	//
//	free(p);
//
//	return 0;
//}


//6.
void test()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return;
	}
	//使用
}
int main()
{
	test();

	return 0;
}