#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);
//	test(p1);
//
//	retrun 0;
//}


//����ָ�봫��
//void test(int ** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
//	printf("%d\n", a);
//
//	return 0;
//}



//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	//&������==������
//	//pf��һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	return 0;
//}


//void test(char* str)
//{
//
//}

//int main()
//{
//	void (*pf)(char*) = &test;
//	return 0;
//}




//int main()
//{
//	//int  (*pt)(int) = &Add;
//	int  (*pt)(int) = Add;//pf === Add
//	int ret = (*pt)(3, 5);//*��������⣬û��ʵ�����壬���Բ��ӣ�Ҳ���ԼӺܶ�
//	//int ret = pt(3, 5);
//
//	/*int ret = Add(3, 5);*/
//
//	printf("%d\n", ret);
//
//	return 0;
//}




//int main()
//{
//	*((void (*) () ) 0 ) ();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void (*) () - ����ָ������
//	//2. (void (*) () ) 0 - ��0����ǿ������ת����������Ϊһ�������ĵ�ַ
//	//3. *((void (*) () ) 0 ) - ��0��ַ�����˽����ò���
//	//4. *((void (*) () ) 0 ) () - �������������
//	//��C�����ȱ�ݡ�
//
//
//	return 0;
//}



//void (*signal(int, void(*) (int))) (int);
////typedef - �����ͽ����ض���
//typedef void (*pfun_t) (int) ;//��void (*) (int)  �ĺ���ָ�����ͽ�����������Ϊ pfun_f
////typedef unsigned uint;
//void (*)(int) signal(int, void(*) (int));//��������⣬���﷨������
//pfun_t signal(int, pfun_t);
//1. signal �� () �Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ������������int�� �ڶ������������Ǻ���ָ�� - void(*) (int)
//   �ú���ָ�룬ָ��һ������Ϊint ��������Ϊvoid�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬ָ��һ������Ϊint ��������Ϊvoid�ĺ���



//����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {pf1, Sub};//����ָ������
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.add       2.sub******\n");
//	printf("*****3.mul       4.div ******\n");
//	printf("*****        0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	//������ - �ӡ������ˡ���
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��\n");
//		int x = 0;
//		int y = 0;
//		scanf("%d", &input);
//		
//		int ret = 0;
//		switch(input)
//		{
//			case 1:
//				printf("����������������\n");
//				scanf("%d %d", &x, &y);
//				ret = Add(x, y);
//				printf("%d\n", ret);
//				break;
//			case 2:
//				printf("����������������\n");
//				scanf("%d %d", &x, &y);
//				ret = Sub(x, y);
//				printf("%d\n", ret);
//				break;
//			case 3:
//				printf("����������������\n");
//				scanf("%d %d", &x, &y);
//				ret = Mul(x, y);
//				printf("%d\n", ret);
//				break;
//			case 4:
//				printf("����������������\n");
//				scanf("%d %d", &x, &y);
//				ret = Div(x, y);
//				printf("%d\n", ret);
//				break;
//			case 0:
//				printf("�˳�����\n");
//				break;
//			default:
//				printf("ѡ���������������\n");
//				break;
//
//		}
//		
//	} while (input);
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.add       2.sub******\n");
//	printf("*****3.mul       4.div ******\n");
//	printf("*****        0.exit        ******\n");
//	printf("***************************\n");
//}
//int main()
//{
//	//������ - �ӡ������ˡ���
//	int input = 0;
//	do {
//		menu();
//
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��\n");		
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//		
//
//	} while (input);
//
//	return 0;
//}





int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("***************************\n");
	printf("*****1.add       2.sub******\n");
	printf("*****3.mul       4.div ******\n");
	printf("*****        0.exit        ******\n");
	printf("***************************\n");
}

//�ص�����
int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("����������������\n");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	//������ - �ӡ������ˡ���
	int input = 0;
	do {
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		
		int ret = 0;
		switch(input)
		{
			case 1:
				ret = Calc(Add);//���������ǵ�ַ
				printf("ret = %d\n", ret);
				break;
			case 2:
				ret = Calc(Sub);
				printf("ret = %d\n", ret);
				break;
			case 3:
				ret = Calc(Mul);
				
				printf("ret = %d\n", ret);
				break;
			case 4:
				ret = Calc(Div);
				
				printf("ret = %d\n", ret);
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default:
				printf("ѡ���������������\n");
				break;

		}
		
	} while (input);

	return 0;
}