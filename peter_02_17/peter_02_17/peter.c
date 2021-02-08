#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
	int a=0;
	if(n>1)
	{
		a=n*factorial(n-1);
	}
	if(n==1)
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
	ret=factorial(n);
	printf("%d的阶乘为%d\n",n,ret);
	system("pause");
	return 0;
}
