#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4  b5  b6是全局的
//int main()
//{
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//	return 0;
//}



//匿名结构体类型
//struct
//{
//	int a;
//	char c;
//	double d;
//	char ch;
//} s;
//struct
//{
//	int a;
//	char c;
//	double d;
//	char ch;
//}* p;
//
//int main()
//{
//	p = &s;//err	
//
//	return 0;
//}


//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//struct N
//{
//	int d;
//	struct N n;
//};

//struct Node
//{
//	int date;
//	struct Node* next;
//};

//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	return 0;
//}


//struct S
//{
//	char c;
//	int i;
//}s1 , s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = {'x', 20};
//	struct B sb = { 3.14, {'m', 100}, 'q' };
//	//.
//	//->
//	printf("%lf %c %d %c", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}


struct S
{
	int i;
	char c;
};

struct S2
{
	char c2;
	int i;
	char c1;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));

	return 0;
}