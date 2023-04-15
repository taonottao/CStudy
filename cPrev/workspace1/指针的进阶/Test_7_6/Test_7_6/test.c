#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//sizeof(a[0])计算的是二维数组第一行的大小
//sizeof()内部的表达式不计算
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16   a[0]可以理解为第一行的数组名
//	printf("%d\n", sizeof(a[0]+1));//4  a[0]作为数组名没有单独放在sizeof中，也没有取地址，
//													//表示第一行第一个元素的地址
//	printf("%d\n", sizeof(*a[0]+1));//4
//	printf("%d\n", sizeof(a+1));//4  a是二维数组的数组名没有取地址，也没有单独放在sizeof内部，
//												//表示二维数组首元素地址，即第一行的地址
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}



//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2  5
//
//	return 0;
//}



//由于还没学结构体，这里告知结构体的大小为20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p的值为0x100000。如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
////考察的是指针类型决定了指针的运算
//int main()
//{
//	printf("%p\n", p + 0x1);//此时+1 --> + 20   0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//printf("%x %x", ptr1[-1], *ptr2);
//	printf("%#x %#x", ptr1[-1], *ptr2);
//
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0,1), (2,3) , (4,5) };
//	int* p;
//	p = [0];
//	printf("%d\n", p[0]);
//
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p , %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}



int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	return 0;
}
