#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int test()
//{
//	if (1);
//	return 0;
//	printf("hehe\n");
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//100���ڵ�����
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//		printf("����һ");
//		break;
//	case 2 :
//		printf("���ڶ�");
//		break;
//	case 3 :
//		printf("������");
//		break;
//	case 4 :
//		printf("������");
//		break;
//	case 5 :
//		printf("������");
//		break;
//	case 6 :
//		printf("������");
//		break;
//	case 7 :
//		printf("������");
//		break;
//	}
//
//	return 0;
//}


//1-5 ������
//6-7 ��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//	case 2 :
//	case 3 :
//	case 4 :
//	case 5 :
//		printf("������\n");
//		break;
//	case 6 :
//	case 7 :
//		printf("��Ϣ��\n");
//		break;
//	default: //���Է����κ�λ�ã�ϰ�߷���ĩβ
//		printf("�Ƿ��ַ�");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��while�У�breakֱ��������ֹѭ��
//	// 
//	//��while�У�continue����������������ѭ��continue����Ĵ��룬
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF --  end of file - �ļ�������־
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z - getchar��ȡ����
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}