#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 9;
//	//float b = 9.0 / 2;
//	//int b = a << 1;
//	int b = a >> 1;
//	//printf("%f\n", a);  //4.000000
//	printf("%d\n", b);  //4.500000
//	return 0;
//}

//int main()
//{
//	//0��ʾ�٣���0������
//	int a = 0;
//	printf("%d\n", !a);
//	return 0;
//}

int main()
{
	//sizeof��һ��������
	//���Ǻ���
	//�������ͻ��߱����Ĵ�С
	int a = 123;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	return 0;
}

//int main()
//{
//	//~��(������)λȡ���������ж�����λ�����֣�1���0,0���1
//	int a = 0;
//	printf("%d\n", ~a); //-1
//	return 0;
//}

//int main()
//{
//	int a = -10, b = -3;
//	printf("%d \n", -a++);
//	printf("%d\n", -a + b);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = ++a; //ǰ�� ++  ����++��ʹ��
//	int c = a++;//����++
//	//printf("%d\n",b); // 11
//	printf("%d\n",a);// 11
//	printf("%d\n",c);// 10
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	 //��������������Ŀ��������  �� ? :
//	//exp1?exp2:exp3
//	//exp1������exp2���㣬�������ʽ�Ľ����exp2�Ľ��
//	//exp1��������exp3���㣬�������ʽ�Ľ����exp3�Ľ��
//	
//	int a = 1;
//	int b = 3;
//	int max = 0;
//	//��
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//��
//	max = a > b ? a : b;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//���ű��ʽ,  �����������μ���
//	//            a = 4        c = 0        b = 2
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//��������һ�����ʽ�Ľ��
//	printf("%d\n", d);//2
//
//	return 0;
//}

//int main()
//{
//	//[]-�±����ò�����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//6
//
//	return 0;
//} 

//�������ò����� - ()
//int main()
//{
//	//���ú�����ʱ�򣬺���������� () ���Ǻ������ò�����
//	printf("hehe\n");
//
//	return 0;
//}