#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int a)
{
	if(a>9)
	{
		int n=a/10;
	    print(n);
	}
	printf("%d ",a%10);
}
int main()
{
	int a=0;
	printf("ÇëÊäÈëÊı×Ö:");
	scanf("%d",&a);
	print(a);
	return 0;
}
