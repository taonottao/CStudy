#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//�����߶ȳ���ĸ���
//C���Գ���ֻҪ������������Ĭ�ϴ���������
//stdin - ��׼������ - ����
// stdout - ��׼����� - ��Ļ
//stderr - ��׼������ - ��Ļ


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	fputc('t', stdout);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
// ʹ��fgetc���ļ����ж�ȡ����
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//ʹ��fgetc�ӱ�׼���ж�ȡ����
//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}

 

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 2;
//	}
//	//д�ļ� - ������
//	fputs("asdfg\n", pf);
//	fputs("qwert", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 2;
//	}
//	//���ļ� - ������
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};

//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	struct S s = { 0 };
//	//�Ը�ʽ�������ݽ��ж��ļ�
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//	//��ӡ
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//�����ƵĶ�д

struct S
{
	char arr[10];
	int num;
	float sc;
};
//д�ļ�
//int main()
//{
//	struct S s = { "abcde", 10, 5.5f };
//	//�����Ƶ���ʽд 
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//���ļ�
int main()
{
	struct S s = { 0 };
	//�����Ƶ���ʽ��
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//���ļ�
	fread(&s, sizeof(struct S), 1, pf);

	printf("%s %d %f\n", s.arr, s.num, s.sc);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}