#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1234
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
	printf("请输入数字:");
	scanf("%d",&a);
	print(a);
	return 0;
}
