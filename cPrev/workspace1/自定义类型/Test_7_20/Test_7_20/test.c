#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//VS - Ĭ�϶�����Ϊ8
//��Ĭ�϶�������Ϊ2
//#pragma pack(2)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}



//offsetof
#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}



//struct S
//{
//	int arr[100] ;
//	int i;
//};
//
//void print1(struct S s)
//{
//	printf("%d\n", s.i);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->i);
//}
//
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 1000 };
//	print1(s);
//	print2(&s);//����
//
//	return 0;
//}


//struct A
//{
//	int _a : 2;//_a��Առ2��bitλ
//	int _b : 5;//_b��Առ5��bitλ
//	int _c : 10;//_c��Առ10��bitλ
//	int _d : 30;//_d��Առ30��bitλ
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}



//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}



//enum Color
//{
//	//Ĭ��0 1 2
//	RED = 5,//5
//	GREEN = 8,//8
//	BLUE//9
//};
//
//int main()
//{
//	//enum Color c = BULE;
//	enum Color c =2;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}



//void menu()
//{
//	printf("1. ADD  2.SUB  3.MUL  4.DIV  0. EXIT")
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int  input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//���ϣ������壩
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u = { 10 };	
//	u.i = 1000;
//	u.c = 100;
//	//printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//�жϵ�ǰ������Ĵ�С�˴洢

int check_sys()
{
	union U
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int a = 1;
	int ret = check_sys();
	//if (*(char*)&a == 0x01)
	//{
	//	printf("С��\n");
	//}
	//else
	//{
	//	printf("daduan\n");
	//}
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}