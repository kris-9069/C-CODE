#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int find_one_num(int a)
{
	int count=0;
	while(a!=0)
	{
		a=a&a-1;
		count++;
	}
	return count;
}
int diff_count(int m,int n)
{
	int a=0;
	int ret=0;
	a=m^n;
	ret=find_one_num(a);
	return ret;
}
int main()
{
	int m=0,n=0;
	int ret=0;
	scanf("%d%d",&m,&n);
	ret=diff_count(m,n);
	printf("不同位的个数: %d\n",ret);
	system("pause");
	return 0;
}
