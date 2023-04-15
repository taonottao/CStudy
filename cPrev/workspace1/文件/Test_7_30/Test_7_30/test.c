#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把一个格式化的数据，转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//从buf字符串中还原出结构体
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}





//文件的随机读写
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//调整
//	//fseek(pf, 2, SEEK_CUR);
//	//fseek(pf, -2, SEEK_END);
//	fseek(pf, 2, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//
// fgetc 函数在读取结束时，会返回EOF
// 正常读取时，返回的是读取到的字符的ASCII码值
// 
// fgets 函数在读取结束时，返回NULL
// 正常读取时，返回存放字符串空间的起始地址
// 
// fread 函数在读取的时候，返回的是实际读取到的完整元素的个数
// 如果发现读取到的完整的元素个数小于指定的元素个数，这就是最后一次读取。
//


//写代码把test.txt文件拷贝一份，生成test2.txt

int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		return 1;
	}
	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwrite == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		return 1;
	}
	//读写文件
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}

	if (feof(pfread))
	{
		printf("遇到文件结束标志，文件正常结束\n");
	}
	else if(ferror(pfread))
	{
		printf("文件读取失败结束\n");
	}

	//关闭文件
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}