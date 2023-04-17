#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	/*for (i = 1; i <= 10; i++) {
		ret = 1;

		for (j = 1; j <= i; j++) {
			ret *= j;
		}
		sum += ret;
	}*/

	for (i = 1; i <= 10; i++) {
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}