#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("hello world\n");
//	printf("%d\n", 100);
//	//sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ��С-��λ���ֽ�byte
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//
//	return 0;
//}
//int main()
//{
//	int age = 19;
//	double weight = 62.5;
//	printf("%d\n", age);         // %d - ����
//	printf("%lf\n", weight);     // %f - float
//	return 0;                    // %lf - double
//}
//int a = 100;   //ȫ�ֱ��� {}֮��
//int main()
//{
//	int a = 10;   //�ֲ�����{}֮��
//	//��ȫ�ֱ�����ֲ��������ֳ�ͻ������£��ֲ��������ȡ�
//	//�������ȫ�ֱ����;ֲ�����������д��һ��
//	return 0;
//}
int main()
{
	int a;
	int b;
	int sum;
	scanf("%d%d", &a,&b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
//scanf_s����  - vs�����ṩ������c���Ա�׼�涨��
