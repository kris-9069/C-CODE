#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
char* my_strcopy(char*arr1,const char*arr2)
{
	char*ret=arr1;
	assert(arr1!=NULL);
	assert(arr2!=NULL);
	while(*arr1++=*arr2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[]="######";
	char arr2[]="bit";
	printf("%s\n",my_strcopy(arr1,arr2));
	system("pause");
	return 0;
}