#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct  Stu
//{
//	struct B sb;
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1和s2也是结构体的变量
////s1,s2是全局变量

//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 16, 3.14}, "李四", 20, "1008603" };//对象
//	//. ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

struct B
{
	char c;
	short s;
	double d;
};
struct  Stu
{
	struct B sb;
	//成员变量
	char name[20];
	int age;
	char id[20];
};
void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	//s是局部变量
	struct Stu s = { {'w', 16, 3.14}, "李四", 20, "1008603" };//对象
	//写一个函数打印s的内容
	print1(s);//传值调用
	print2(&s);//传址调用 - 省空间，效率更高

	return 0;
}