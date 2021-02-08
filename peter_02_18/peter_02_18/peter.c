#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fibonacci(int n)
{
	int a=0;
	if(n>2)
	{
		a=Fibonacci(n-1)+Fibonacci(n-2);
	}
	if(n==1||n==2)
	{
		return 1;
	}
	return a;
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=Fibonacci(n);
	printf("第%d个斐波那契数为%d\n",n,ret);
	return 0;
}