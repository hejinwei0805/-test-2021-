#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<string.h>
////函数的调用 
////函数是独立的
//void newline()
//{
//	printf("hehehe\n");
//}
////函数的嵌套调用
//void threeline()
//{
//	int i = 0;
//	for (i = 0;i < 3;i++);
//	{
//		newline();
//	}
//}
////函数不能嵌套定义
//int main()
//{
//	threeline();
//	return 0;
//}
//求字符串长度头文件
//#include<string.h>
//int main()
//{
//	//把字符串长度放到len里边去
//	int len = strlen("abcdef");//strlen求字符串长度
//	//把len 打印出来
//		printf("%d\n",len);
//	return 0;
//}

//int main()
//{
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回的是字符的个数
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
//	//打印num的每一位
//	// 1 2 3 4
//	print(num);//print函数就可以把num每一位打印在屏幕上
//	//print (1234)
//	//print(123）/4
//	//print（12）/3
//	//print（1）/2
//	//1 2 3 4
//	return 0;
//}


//照着递推公式写的
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

//int my_strlen(char* str)//str指的是字符串a
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;//指的是abcdef\0的第几个
//		str++;//字符串长度
//
//	}
//	return count;
//}
//int main()
//{
//	//a b c d e f \0
//	char arr[] = "abcdef";//创建一个数组里面有abcdef
//	//数组名是首元素的地址-char（a的元素地址）
//
//	int len = my_strlen(arr);//让int len=求字符串长度
//	printf("%d\n", len);//打印len
//
//	return 0;
//
//}