#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//void func(int x, int y, int z) {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	if (x > y) {
//		if (x > z) {
//			a = x;
//			b = y > z ? y : z;
//			c = y > z ? z : y;
//		}
//		else {
//			a = z;
//			b = x;
//			c = y;
//		}
//	}
//	else {
//		if (y > z) {
//			a = y;
//			b = x > z ? x : z;
//			c = x < z ? x : z;
//		}
//		else {
//			a = z;
//			b = y;
//			c = x;
//		}
//	}
//
//	printf("%d %d %d\n", a, b, c);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	func(x, y, z);
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 100; i <= 200; i++) {
//		flag = 1;
//		for (j = 2; j < sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}	
//		}
//		if (flag) {
//			printf("%d ", i);
//		}
//		
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int max = m > n ? m : n;
	int min = m < n ? m : n;
	int i = 0;
	for (i = min; i > 0; i--) {
		if (max % i == 0 && min % i == 0) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}