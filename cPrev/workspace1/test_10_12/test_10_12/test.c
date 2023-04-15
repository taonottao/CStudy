#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
// 
// 作用域
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：
//int t_wang = 2021; //全局变量
//int main()
//{
//	printf("1:%d\n", t_wang);
//	printf("hehe\n");
//	{
//		int a = 10;//局部变量
//		printf("2:%d\n", t_wang);
//	}
//	printf("3:%d\n", t_wang);
//	return 0;
//}

//声明一下变量（add.c里的）
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建到销毁之间的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//}

//常量
//#define MAX 10000
//int main()
//{
//	//1.字面常量
//	/*3.14;
//	10;
//	'a';
//	"asdfg";*/
//
//	//2.const修饰的常变量
//	//const int sum = 10;//sum是常变量-具有常属性（不能被改变的属性）
//	//sum = 20;  
//	//int arr[10] = {0};
//	//const int n = 10;
//	//int arr2[n];//n是变量，不行
//
//	//3.#define定义的标识符常量
//	//MAX = 20000; //不可更改
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	
//	return 0;
//}

//性别
//enum Sex
//{
//	//这种枚举类型变量的未来可能取值
//	//枚举常量，默认从0开始
//	MALE = 3, //赋初值	
//	FEMALE,	
//	SECRET	 
//};
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串就是一串字符-用""括起来的一串字符
//int main()
//{
//	"asfdg";
//	"helloworld";
//	return 0;
//}
//int main()
//{
//	//字符数组-数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//	char arr[] = "hello";
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2));//随机值
//	printf("%d\n", strlen(arr3));//3
//	//int len = strlen("abc");  //string length
//	//printf("%d\n", len);
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}

//转义字符--转变了原来的意思
//int main()
//{
////	//printf("c:\test\test.c");
////	//printf("c:\\test\\test.c\n");
////	//printf("ab\ncd");
//	printf("\a\a\a");
//	return 0;
//}

int main()
{
	printf("%c\n", '\130'); //8进制中130是10进制中的88
	//X--ASCII码值是88
	printf("%c\n", 33);
	
	return 0;
}