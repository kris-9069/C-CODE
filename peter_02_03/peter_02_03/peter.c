#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	char arr1[]="hellow peter!!How are you?";
	char arr2[]="$$$$$$$$$$$$$$$$$$$$$$$$$$";
	int ret=0,i=0,j=ret;
	int left=0,right= ret;;
	ret=strlen(arr1)-1;
	printf("%s\n",arr2);
	system("cls");
	for(left=0,right=ret;left<=right;left++,right--)
	
	{
		i=left;
		j=right;
		arr2[left]=arr1[i];
	    arr2[right]=arr1[j];
		printf("%s\n",arr2);
		system("cls");
		Sleep(1000);
	}
printf("%s\n",arr2);
return 0;
}