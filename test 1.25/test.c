#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<string.h>
////�����ĵ��� 
////�����Ƕ�����
//void newline()
//{
//	printf("hehehe\n");
//}
////������Ƕ�׵���
//void threeline()
//{
//	int i = 0;
//	for (i = 0;i < 3;i++);
//	{
//		newline();
//	}
//}
////��������Ƕ�׶���
//int main()
//{
//	threeline();
//	return 0;
//}
//���ַ�������ͷ�ļ�
//#include<string.h>
//int main()
//{
//	//���ַ������ȷŵ�len���ȥ
//	int len = strlen("abcdef");//strlen���ַ�������
//	//��len ��ӡ����
//		printf("%d\n",len);
//	return 0;
//}

//int main()
//{
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf���ص����ַ��ĸ���
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0
//
//}


//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	//��ӡnum��ÿһλ
//	// 1 2 3 4
//	print(num);//print�����Ϳ��԰�numÿһλ��ӡ����Ļ��
//	//print (1234)
//	//print(123��/4
//	//print��12��/3
//	//print��1��/2
//	//1 2 3 4
//	return 0;
//}


//���ŵ��ƹ�ʽд��
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//
//
//}

//void test(int n)
//	{
//	if (n < 10000)
//	{
//		test(n - 1);
//	}
//
//
//	}
//int main()
//{
//	test(1);
//}

//int my_strlen(char* str)//strָ�����ַ���a
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;//ָ����abcdef\0�ĵڼ���
//		str++;//�ַ�������
//
//	}
//	return count;
//}
//int main()
//{
//	//a b c d e f \0
//	char arr[] = "abcdef";//����һ������������abcdef
//	//����������Ԫ�صĵ�ַ-char��a��Ԫ�ص�ַ��
//
//	int len = my_strlen(arr);//��int len=���ַ�������
//	printf("%d\n", len);//��ӡlen
//
//	return 0;
//
//}