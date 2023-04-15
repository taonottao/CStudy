#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, a, b, c;
	printf("请输入一个三位数：");
	scanf("%d", &i); //345
	a = i % 10;
	b = i % 100 / 10;
	c = i / 100;
	
	printf("%d%d%d\n",a,b,c);
	
	return 0;
}
