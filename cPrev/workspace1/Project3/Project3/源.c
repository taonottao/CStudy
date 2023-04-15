#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long n = 1, chengji = 1, a = 2;
	while (n <= 5)
	{
		n = n + 1;
		chengji = chengji * a;
		a = a + 2;
	}
	printf("计算结果是%d\n", chengji);
	return 0;
}