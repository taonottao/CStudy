#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void f(int n)
{
	
	if (n < 3)  
		printf("%d ", n);
	else {
		f(n / 3);
		printf("%d ", n % 3);
	}
}
int main()
{
	int n = 15;
	
	f(15);
	return 0;

}