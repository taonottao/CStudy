#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ�����
//2.�����������ǹؼ���
//
//int main()
//{
//	//int char;
//	int a = 0;//�Զ��������Զ�����
//	//autoʡ�Ե���
//	//auto���ĵ�C�����﷨��Ҳ���ĵ��÷�
//	return 0;
//}

//int main()
//{
//	//  ����/Ƶ����ʹ�õ����ݣ������ڼĴ����У�����Ч��
//	register int num = 0;//����num��ֵ����ڼĴ�����
//	return 0;
//}

//typedef ����������
//typedef  unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static  -  ��̬��
//1.static���ξֲ�����
// �ı��˾ֲ��������������ڣ��������Ǹı��˱������������ͣ�
//2.static����ȫ�ֱ���
// ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�����ʹ��
// ����Դ�ļ�����ʹ��
// ȫ�ֱ���������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ���ļ������ⲿ��������
// ���Ǳ�static���κ󣬾ͱ���ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ����Դ�ļ�
//static���κ���
// ʹ���������ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�����ʹ��
//����Դ�ļ�����ʹ��
//�����ϣ�static���������ⲿ�������Ա���ڲ��������ԣ���static����ȫ�ֱ���һ����
//��
//void  test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//��
//void  test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern�����ⲿ���ŵ�
//extern int g_val;
//int  main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

extern int  Add(int x, int y);
int main()
{
	int a = 11;
	int b = 22;
	int sum = Add(a, b);
	printf("%d\n", sum);


	return 0;
}