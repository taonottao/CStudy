#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("hello world\n");
//	printf("%d\n", 100);
//	//sizeof-关键字-操作符-计算类型或者变量所占空间大小-单位：字节byte
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//
//	return 0;
//}
//int main()
//{
//	int age = 19;
//	double weight = 62.5;
//	printf("%d\n", age);         // %d - 整型
//	printf("%lf\n", weight);     // %f - float
//	return 0;                    // %lf - double
//}
//int a = 100;   //全局变量 {}之外
//int main()
//{
//	int a = 10;   //局部变量{}之内
//	//当全局变量与局部变量名字冲突的情况下，局部变量优先。
//	//不建议把全局变量和局部变量的名字写成一样
//	return 0;
//}
int main()
{
	int a;
	int b;
	int sum;
	scanf("%d%d", &a,&b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
//scanf_s函数  - vs编译提供，不是c语言标准规定的
