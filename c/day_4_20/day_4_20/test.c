#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void menu()
//{
//	printf( "**********         �˵�       *******\n" );
//	printf( "******** 1. play   0. exit *******\n" );
//}
//
//void game()
//{
//	int x = 0;
//	int ret = rand() % 100 + 1;
//	printf("��������Ҫ�µ����֣�");
//	
//	while(1)
//	{
//		scanf("%d", &x);
//		if (x > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (x < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("������Ϸ");
//			break;
//		}
//		
//
//
//	} while (input);
//	
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    long sum = 0;
//    for (i = 1; i <= n; i++) {
//        sum += i;
//    }
//
//    printf("%ld\n", sum);
//
//    return 0;
//}


//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    c = c > d ? c : d;
//    b = b > c ? b : c;
//    a = a > b ? a : b;
//    printf("%d\n", a);
//
//    return 0;
//}

int main() {
    char x = 0;
    while ((x = getchar()) != EOF) {
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
            printf("%c is an alphabet.\n", x);
        }
        else
        {
            printf("%c is not an alphabet.\n", x);
        }
        getchar();

    }

    return 0;
}