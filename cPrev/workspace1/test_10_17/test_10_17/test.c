#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//define��һ��Ԥ����ָ��
//1.define���峣��

//#define  MAX 1000		
//int main()
//{
//	
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define  �����     

//#define ADD(X,Y)  ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C�����н�ָ�����
//	// *˵��pa��ָ�����
//	//int ˵��paָ��Ķ�����int����
//
//	char ch = 'a';
//	char* pc = &ch;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* �����ò���  *pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 %d\n", a);//20
//
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}


//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

//struct  Stu
//{
//	char name[10]; //��Ա����
//	int age;
//	double score;
//};
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	int id[30];
//};
//
//int main()
//{
//	struct Stu  s = { "����",18, 90.5 }; //�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}


//д�����������������ϴ�ֵ
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


//����
//int Max(int x, int y)
//{
//	( x > y) ? x : y;
//	
//}

//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

int main()
{
	int M = 0;
	scanf("%d\n", &M);
	if (M % 5 == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}