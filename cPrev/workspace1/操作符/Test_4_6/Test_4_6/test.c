#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>




//结构体
//书：书名，书号，出版社，作者，定价

//struct  Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	struct Book b = { "c语言","c20220406",55 };
//	  struct Book * pb = &b;
//	  printf("书名：%s\n", pb->name);
//	  printf("书号：%s\n", pb->id);
//	  printf("定价：%d\n", pb->price);
//	/*  printf("书名：%s\n", (*pb).name);
//	 printf("书号：%s\n", (*pb).id);
//	 printf("定价：%d\n", (*pb).price);*/
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("定价：%d\n", b.price);
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000011
//	//00000000000000000000000000000011
//	char b = 127;
//	//01111111
//	//00000000000000000000000001111111
//	char c = a + b;
//	//00000000000000000000000010000010
//	// 10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	// -126
//	//发现a和b都是char类型，都没有达到一个int大小
//	//这里就会发生整型提升
//	printf("%d\n", c);
//
//
//	return 0;
//}



