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
//	//��һ����ʽ�������ݣ�ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//��buf�ַ����л�ԭ���ṹ��
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}





//�ļ��������д
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//����
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
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//�ر��ļ�
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
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//
// fgetc �����ڶ�ȡ����ʱ���᷵��EOF
// ������ȡʱ�����ص��Ƕ�ȡ�����ַ���ASCII��ֵ
// 
// fgets �����ڶ�ȡ����ʱ������NULL
// ������ȡʱ�����ش���ַ����ռ����ʼ��ַ
// 
// fread �����ڶ�ȡ��ʱ�򣬷��ص���ʵ�ʶ�ȡ��������Ԫ�صĸ���
// ������ֶ�ȡ����������Ԫ�ظ���С��ָ����Ԫ�ظ�������������һ�ζ�ȡ��
//


//д�����test.txt�ļ�����һ�ݣ�����test2.txt

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
	//��д�ļ�
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}

	if (feof(pfread))
	{
		printf("�����ļ�������־���ļ���������\n");
	}
	else if(ferror(pfread))
	{
		printf("�ļ���ȡʧ�ܽ���\n");
	}

	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}