#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//ģ��ʵ��strcpy����
#include <assert.h>
//char*  my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		//*dest++ = *src++;
//		
//	}
//	//*dest = *src;
//	//char* ret = dest;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	;//1.Ŀ��ռ����ʼ��ַ  2. Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	//const���α����������������Ϊ������,���ܱ��޸ģ��������ϻ��Ǳ���
//	const int num = 10;
//	int n = 20;
//	
//	 int* const p = &num;
//	//const����ָ�������ʱ��
//	// const�������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//	//          ����ָ��ָ������ݿ��Ա��޸�
//	*p = 20;
//	//p = &n;
//
//	//const int* p= &num;
//	////const����ָ�������ʱ��
//	//// const�������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////          ����ָ����������ǿ����޸ĵ�
//	////*p = 20;
//	//p = &n;
//	
//	printf("%d\n", num);
//
//	return 0;
//}



//ģ��ʵ��strlen����
//size_t - unsigned int �޷�������
size_t my_strlen(const char* dest)
{
	assert(dest!= NULL);
	size_t count = 0;
	while (*dest++ != '\0')
	{
		count++;		
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	int a = my_strlen(arr);
	printf("%d\n", a);

	return 0;
}