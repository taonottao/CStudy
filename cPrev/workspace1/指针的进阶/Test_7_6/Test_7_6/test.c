#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//sizeof(a[0])������Ƕ�ά�����һ�еĴ�С
//sizeof()�ڲ��ı��ʽ������
//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16   a[0]�������Ϊ��һ�е�������
//	printf("%d\n", sizeof(a[0]+1));//4  a[0]��Ϊ������û�е�������sizeof�У�Ҳû��ȡ��ַ��
//													//��ʾ��һ�е�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a[0]+1));//4
//	printf("%d\n", sizeof(a+1));//4  a�Ƕ�ά�����������û��ȡ��ַ��Ҳû�е�������sizeof�ڲ���
//												//��ʾ��ά������Ԫ�ص�ַ������һ�еĵ�ַ
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



//���ڻ�ûѧ�ṹ�壬�����֪�ṹ��Ĵ�СΪ20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
////�������ָ�����;�����ָ�������
//int main()
//{
//	printf("%p\n", p + 0x1);//��ʱ+1 --> + 20   0x100014
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
