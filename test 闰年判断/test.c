//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d\n", year);
//		}
//	    if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//		return 0;
//	}
//}
//写一个代码：打印100-200之间的素数
//素数-只能被1和0和他本身整除的数
//判断素数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//		//判断i是否为素数
//	{
//		int flag = 1;//假设i是素数
//		int j = 0;
//	for(j=2;j<i;j++)//j最大就是i-1
//			{
//			if (i % j == 0)
//			{
//				flag = 0;//标识i不是素数
//				break;
//			}
//			}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
		for (i = 1;i <= 9;i++)
		{
			//打印一行
			//1.21 58.48乘法表
			int j = 0;
			for (j = 1;j <= i;j++);
				{
				printf("%d*%d=%d", i, j, i* j);
				}
			printf("\n");
		}
	return 0;
}