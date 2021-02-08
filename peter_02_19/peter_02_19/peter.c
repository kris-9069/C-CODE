#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fibonacci2(int n)
{
	int a=1;
	int b=1;
	int c=0;
	if(n==1||n==2)
	{
		return 1;
	}
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=Fibonacci2(n);
	printf("第%d个斐波那契数为%d\n",n,ret);
	return 0;
}