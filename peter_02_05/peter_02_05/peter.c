#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int max=a;
	printf("请将下面数字从大到小排列:");
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
	{
		max=b;
		b=a;
		a=max;
	}
	if(c>a)
	{
		max=c;
		c=a;
		a=max;
	}
	if(c>b)
	{
		max=c;
		c=b;
		b=max;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}