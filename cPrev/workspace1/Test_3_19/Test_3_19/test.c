#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] ="abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

int mcmp(int x, int y)
{
	int z = 0;
	if (x >= y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = mcmp(a, b);
	printf("max = %d\n", max);
	return 0;
}