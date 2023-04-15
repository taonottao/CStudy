#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//浮点型与整型在内存中的储存有区别
int main()
{
	int n = 9;//4byte
	//00000000000000000000000000001001
	float* pFloat = (float*)&n;
	//0    00000000   00000000000000000001001
	//s       E                        M
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%d\n", *pFloat);

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//E = 3  +127
	//0 10000010  00100000000000000000000
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%d\n", *pFloat);

	return 0;
}


//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//1.011*2^2
//	//s = 0 M = 1.011 E = 2
//	//s = 0  M = 011   E = 2+127
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40    b0  00  00       
//
//	return 0;
//}