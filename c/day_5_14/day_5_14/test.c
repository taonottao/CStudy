#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//    int count = 0;
//    int n = 0;
//    scanf("%d", &n);
//    int num = 1;
//    int x = 0;
//    while (x < 32)
//    {
//        if ((n & num) != 0)
//        {
//            count++;
//        }
//        num = num << 1;
//        x++;
//    }
//    printf("%d\n", count);
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int count = 0;
//    int n = a ^ b;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1 == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d\n", &n, &m);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int j = 0;
    int s = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[s++] = arr1[i];
            i++;
        }
        else
        {
            arr3[s++] = arr2[j];
            j++;
        }
    }
    if (i < n)
    {
        for (; i < n; i++)
        {
            arr3[s++] = arr1[i];
        }
    }
    else if (j < m)
    {
        for (; j < m; j++)
        {
            arr3[s++] = arr2[j];
        }
    }
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}