#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//C语言提供的关键字
//1.C语言提供的，不能自己创建
//2.变量名不能是关键字
//
//int main()
//{
//	//int char;
//	int a = 0;//自动创建，自动销毁
//	//auto省略掉了
//	//auto在心得C语言语法中也有心得用法
//	return 0;
//}

//int main()
//{
//	//  大量/频繁被使用的数据，想存放在寄存器中，提升效率
//	register int num = 0;//建议num的值存放在寄存器中
//	return 0;
//}

//typedef 类型重命名
//typedef  unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static  -  静态的
//1.static修饰局部变量
// 改变了局部变量的生命周期（本质上是改变了变量的数据类型）
//2.static修饰全局变量
// 使得这个全局变量只能在自己所在的源文件（.c）内部可以使用
// 其他源文件不能使用
// 全局变量在其他源文件内部可以被使用，是因为全局文件具有外部链接属性
// 但是被static修饰后，就变成内部链接属性，其他源文件就不能链接到这个源文件
//static修饰函数
// 使得这个函数只能在自己所在的源文件（.c）内部可以使用
//其他源文件不能使用
//本质上，static将函数的外部链接属性变成内部连接属性（和static修饰全局变量一样）
//①
//void  test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//②
//void  test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern声明外部符号的
//extern int g_val;
//int  main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

extern int  Add(int x, int y);
int main()
{
	int a = 11;
	int b = 22;
	int sum = Add(a, b);
	printf("%d\n", sum);


	return 0;
}