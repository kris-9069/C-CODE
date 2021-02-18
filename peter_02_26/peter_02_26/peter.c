#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char*arr)
{
	int count=0;
	while(*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
void reverse_string(char*arr)
{
	char tmp=arr[0];
	int len=my_strlen(arr);
	arr[0]=arr[len-1];
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	arr[len-1]=tmp;
}
int main()
{
	char arr[]="asdfgh";
	reverse_string(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}