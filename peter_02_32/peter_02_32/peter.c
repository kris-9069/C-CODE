#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
double test(int n,int k)
{
	if(k>0)
		return n*test(n,k-1);
	else if(k==0)
		return 1.0;
	else
		return (1.0/(test(n,-k)));
}
int main()
{
	int n=0,k=0;
	double ret=0;
	scanf("%d%d",&n,&k);
	ret=test(n,k);
	printf("%d的%d次方:>%lf\n",n,k,ret);
	system("pause");
	return 0;
}
