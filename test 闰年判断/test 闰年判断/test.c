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
//дһ�����룺��ӡ100-200֮�������
//����-ֻ�ܱ�1��0����������������
//�ж�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//		//�ж�i�Ƿ�Ϊ����
//	{
//		int flag = 1;//����i������
//		int j = 0;
//	for(j=2;j<i;j++)//j������i-1
//			{
//			if (i % j == 0)
//			{
//				flag = 0;//��ʶi��������
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
			//��ӡһ��
			//1.21 58.48�˷���
			int j = 0;
			for (j = 1;j <= i;j++);
				{
				printf("%d*%d=%d", i, j, i* j);
				}
			printf("\n");
		}
	return 0;
}