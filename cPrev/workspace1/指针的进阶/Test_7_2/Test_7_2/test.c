#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);
//	test(p1);
//
//	retrun 0;
//}


//二级指针传参
//void test(int ** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
//	printf("%d\n", a);
//
//	return 0;
//}



//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//	//&函数名==函数名
//	//pf是一个函数指针变量
//	int (*pf)(int, int) = &Add;
//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	return 0;
//}


//void test(char* str)
//{
//
//}

//int main()
//{
//	void (*pf)(char*) = &test;
//	return 0;
//}




//int main()
//{
//	//int  (*pt)(int) = &Add;
//	int  (*pt)(int) = Add;//pf === Add
//	int ret = (*pt)(3, 5);//*有助于理解，没有实际意义，可以不加，也可以加很多
//	//int ret = pt(3, 5);
//
//	/*int ret = Add(3, 5);*/
//
//	printf("%d\n", ret);
//
//	return 0;
//}




//int main()
//{
//	*((void (*) () ) 0 ) ();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void (*) () - 函数指针类型
//	//2. (void (*) () ) 0 - 对0进行强制类型转换，被解释为一个函数的地址
//	//3. *((void (*) () ) 0 ) - 对0地址进行了解引用操作
//	//4. *((void (*) () ) 0 ) () - 调用了这个函数
//	//《C陷阱和缺陷》
//
//
//	return 0;
//}



//void (*signal(int, void(*) (int))) (int);
////typedef - 对类型进行重定义
//typedef void (*pfun_t) (int) ;//对void (*) (int)  的函数指针类型进行了重命名为 pfun_f
////typedef unsigned uint;
//void (*)(int) signal(int, void(*) (int));//更容易理解，但语法不允许
//pfun_t signal(int, pfun_t);
//1. signal 和 () 先结合，说明signal是函数名
//2. signal函数的第一个参数类型是int， 第二个函数类型是函数指针 - void(*) (int)
//   该函数指针，指向一个参数为int 返回类型为void的函数
//3. signal函数的返回类型也是一个函数指针
// 该函数指针，指向一个参数为int 返回类型为void的函数



//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {pf1, Sub};//函数指针数组
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.add       2.sub******\n");
//	printf("*****3.mul       4.div ******\n");
//	printf("*****        0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	//计算器 - 加、减、乘、除
//	int input = 0;
//	do {
//		menu();
//		printf("请选择\n");
//		int x = 0;
//		int y = 0;
//		scanf("%d", &input);
//		
//		int ret = 0;
//		switch(input)
//		{
//			case 1:
//				printf("请输入两个操作数\n");
//				scanf("%d %d", &x, &y);
//				ret = Add(x, y);
//				printf("%d\n", ret);
//				break;
//			case 2:
//				printf("请输入两个操作数\n");
//				scanf("%d %d", &x, &y);
//				ret = Sub(x, y);
//				printf("%d\n", ret);
//				break;
//			case 3:
//				printf("请输入两个操作数\n");
//				scanf("%d %d", &x, &y);
//				ret = Mul(x, y);
//				printf("%d\n", ret);
//				break;
//			case 4:
//				printf("请输入两个操作数\n");
//				scanf("%d %d", &x, &y);
//				ret = Div(x, y);
//				printf("%d\n", ret);
//				break;
//			case 0:
//				printf("退出程序\n");
//				break;
//			default:
//				printf("选择错误，请重新输入\n");
//				break;
//
//		}
//		
//	} while (input);
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.add       2.sub******\n");
//	printf("*****3.mul       4.div ******\n");
//	printf("*****        0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	//计算器 - 加、减、乘、除
//	int input = 0;
//	do {
//		menu();
//
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择\n");		
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//		
//
//	} while (input);
//
//	return 0;
//}





int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("***************************\n");
	printf("*****1.add       2.sub******\n");
	printf("*****3.mul       4.div ******\n");
	printf("*****        0.exit        ******\n");
	printf("***************************\n");
}

//回调函数
int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数\n");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	//计算器 - 加、减、乘、除
	int input = 0;
	do {
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		
		int ret = 0;
		switch(input)
		{
			case 1:
				ret = Calc(Add);//函数名就是地址
				printf("ret = %d\n", ret);
				break;
			case 2:
				ret = Calc(Sub);
				printf("ret = %d\n", ret);
				break;
			case 3:
				ret = Calc(Mul);
				
				printf("ret = %d\n", ret);
				break;
			case 4:
				ret = Calc(Div);
				
				printf("ret = %d\n", ret);
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("选择错误，请重新输入\n");
				break;

		}
		
	} while (input);

	return 0;
}