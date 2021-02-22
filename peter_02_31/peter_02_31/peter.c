#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n)
{
	int sum=0;
	if(n>0)
	{
		sum=n%10;
		sum=sum+DigitSum(n/10);
	}
	return sum;
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=DigitSum(n);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
