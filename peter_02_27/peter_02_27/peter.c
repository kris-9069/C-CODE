#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int judge()
{
	int a=1;
	return *(char*)&a;;
}
int main()
{
	int ret=0;
	ret=judge();
	if(ret==1)
		printf("小端\n");
	if(ret==0)
		printf("大端\n");
	system("pause");
	return 0;
}
