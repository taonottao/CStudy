#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//����������ص�
//1.�ṹ����������֮ǰ����������һ��������Ա
//2.sizeof���ص����ֽṹ�Ĵ�С������������������ڴ�
//3.�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬
//   ���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С


struct S
{
	int n;
	//int arr[];//��Сδ֪   arrΪ��������
	int arr[0];//��Сδ֪   arrΪ��������
};

int main()
{
	//����arr��СΪ10int
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	//����
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//ʹ��

	//�ͷ�
	free(ps);
	ps = NULL;

	return 0;
}