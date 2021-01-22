//#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//int main()
//{
//	//数组里有十个元素
//	int arr[10] = { 0 };
//	//让初始值为0
//	int i = 0;
//	//从0开始，到<10，后面依次＋1
//	for (i = 0;i < 10;i++);
//	{
//		//输入数组里的数
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max =  arr[0];
//	for (i = 1;i < 10;i++)
//	{
//		//如果数组里的数大于max
//		if (arr[i] > max)
//		{
//			//那么让max更新，取数组里的数
//			max = arr[i];
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 0;
//			for (j = 1;j <= i;j++)
//			{
//				printf("%d*%d", i, j, i * j);
//			}
//		printf("\n");
//	}
//	return 0;
//}


//函数里不要装打印的，垃圾东西
//只有一个任务，算加法
//int Add(int x, int y)
//{
//	//返回return(x+y)的值
//	return(x + y);
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//Add相加，int ret是Add的返回值
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS   1
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}