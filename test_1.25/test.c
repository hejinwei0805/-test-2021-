#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;

	int tmp = 0;//��ƿ

	printf("a=%d b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);

	return 0;

}