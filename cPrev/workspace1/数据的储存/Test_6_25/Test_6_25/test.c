#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Debug 与 Release不一样,Release会优化
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//整型家族
//浮点型家族
//构造类型--自定义类型
//		数组
//		struct - 结构体类型
//		枚举
//		联合体
//指针类型
//		
//空类型
//void
//函数返回类型  void test();
//函数参数 void test(void);
//指针 void* p;

//int main()
//{
//	int arr[10];//int [10]
//	int arr2[5];//int [5]
//
//	return 0;
//}

//int main()
//{
//	int a = -10;
//
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//FFFFFFF6 - 补码转换为16进制
//
//	return 0;
//}


//大端字节序和小端字节序
//int main()
//{
//	
//	int a = 0x11223344;
//	//大端字节序：
//	//把数据的低位字节序的内容存放在高位地址处，高位字节序的内容存放在低位地址处
//	//小端字节序：
//	//把数据的低位字节序的内容存放在地位地址处，高位字节序的内容存放在高位地址处
//
//	return 0;
//}

//int main()
//{
//	//写一个代码，判断字节序
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//100000000000000000000000000000001
//	//111111111111111111111111111111110
//	//111111111111111111111111111111111
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	
//	printf("%d %d %d %d\n", a, b, c,d);
//
//	return 0;
//}

//补充
//1.char 是signed还是 unsigned
//c语言并没有规定，取决于编译器
//
//2.int 是  signed
//
//3.short 是 signed


//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	
//	printf("%u\n", a);
//
//	return 0;
// }

//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000//补位由 char决定
//	//
//	printf("%u\n", a);
//
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int  j = 10;
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//10000000000000000000000000001001
//	//10000000000000000000000000001010
//	printf("%d\n", i + j);
//
//	return 0;
//}



//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}


#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -127 -128  127 126 125 ... 3 2 1 0 -1 -2 ...
//	printf("%d", strlen(a));//找\0 -> 0
//
//	return 0;
//}



unsigned char i = 0;
int main()
{
	for (i = 0;i <= 255;i++)
	{
		printf("hello world\n");
	}

	return 0;
}