#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 9;
//	//float b = 9.0 / 2;
//	//int b = a << 1;
//	int b = a >> 1;
//	//printf("%f\n", a);  //4.000000
//	printf("%d\n", b);  //4.500000
//	return 0;
//}

//int main()
//{
//	//0表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);
//	return 0;
//}

int main()
{
	//sizeof是一个操作符
	//不是函数
	//计算类型或者变量的大小
	int a = 123;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	return 0;
}

//int main()
//{
//	//~按(二进制)位取反：把所有二进制位中数字，1变成0,0变成1
//	int a = 0;
//	printf("%d\n", ~a); //-1
//	return 0;
//}

//int main()
//{
//	int a = -10, b = -3;
//	printf("%d \n", -a++);
//	printf("%d\n", -a + b);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = ++a; //前置 ++  ，先++后使用
//	int c = a++;//后置++
//	//printf("%d\n",b); // 11
//	printf("%d\n",a);// 11
//	printf("%d\n",c);// 10
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	 //条件操作符（三目操作符）  ： ? :
//	//exp1?exp2:exp3
//	//exp1成立，exp2计算，整个表达式的结果是exp2的结果
//	//exp1不成立，exp3计算，整个表达式的结果是exp3的结果
//	
//	int a = 1;
//	int b = 3;
//	int max = 0;
//	//①
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//②
//	max = a > b ? a : b;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//逗号表达式,  从左向右依次计算
//	//            a = 4        c = 0        b = 2
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//结果是最后一个表达式的结果
//	printf("%d\n", d);//2
//
//	return 0;
//}

//int main()
//{
//	//[]-下表引用操作符
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//6
//
//	return 0;
//} 

//函数调用操作符 - ()
//int main()
//{
//	//调用函数的时候，函数名后面的 () 就是函数调用操作符
//	printf("hehe\n");
//
//	return 0;
//}