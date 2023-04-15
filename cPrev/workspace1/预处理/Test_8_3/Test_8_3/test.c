#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#define 定义宏
//#define SQU(X) X*X 
//
//int main()
//{
//	printf("%d\n", SQU(3 + 1));// 3+1*3+1  = 7
//	printf("%d\n", SQU((3 + 1)));//(3+1)*(3+1)
//
//	return 0;
//}



//#define PRINT(X, FORMET) printf("the value of " #X " is "FORMET"\n",X)

//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//
//	int a = 10;
//	PRINT(a,  "%d" );
//	//the value of a is 10
//	int b = 20;
//	PRINT(b, "%d");
//	//the  value of b is 20
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//	float f = 5.5f;
//	PRINT(f, "%f");
//
//	return 0;
//}


//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class,101));
//
//	return 0;
//}



////定义宏
//#define M 100
////移除宏
//#undef M
//
//int main()
//{
//	int a = M;
//
//	return 0;
//}


//条件编译

//#define PRINT
//
//int main()
//{
//#ifdef PRINT
//	printf("hh\n");
//#endif
//
//	return 0;
//}


//int main()
//{
//#if 1==1
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}


#define TEST 0

int main()
{
	//如果TEST定义了，下面参与编译
#ifdef TEST
	printf("test1\n");
#endif

#if defined(TEST)
	printf("test1\n");
#endif


	//如果TEST不定义，下面参与编译
#ifndef TEST
	printf("test2\n");
#endif

#if !defined(TEST)
	printf("test2\n");
#endif

	return 0;
}