#define  _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
int main()
{
	int m=0,n=0,r=0;
	printf("�����������������Լ��:");
	scanf("%d%d",&m,&n);
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
	    r=m%n;
	}
	printf("%d\n",n);
	return 0;
}