#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//define是一个预处理指令
//1.define定义常量

//#define  MAX 1000		
//int main()
//{
//	
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define  定义宏     

//#define ADD(X,Y)  ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p专门用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在C语言中叫指针变量
//	// *说明pa是指针变量
//	//int 说明pa指向的对象是int类型
//
//	char ch = 'a';
//	char* pc = &ch;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* 解引用操作  *pa就是通过pa里面的地址，找到a
//	printf("                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 %d\n", a);//20
//
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}


//结构体可以让C语言创造新的类型出来

//创造一个学生

//struct  Stu
//{
//	char name[10]; //成员变量
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	int id[30];
//};
//
//int main()
//{
//	struct Stu  s = { "张三",18, 90.5 }; //结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}


//写函数求输入两个数较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


//不行
//int Max(int x, int y)
//{
//	( x > y) ? x : y;
//	
//}

//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

int main()
{
	int M = 0;
	scanf("%d\n", &M);
	if (M % 5 == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}