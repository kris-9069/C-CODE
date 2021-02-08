#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char* arr)
{
	if(*arr!='\0')
	{
		return 1+my_strlen(arr+1);
	}
	else
		return 0;
}
int main()
{
	char arr[]="peter";
	int ret=my_strlen(arr);
	printf("×Ö·û¸öÊıÎª:%d\n",ret);
	system("pause");
	return 0;
}
