#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char arr[20]={0};
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",&arr);
		if(0==strcmp(arr,"123456"))
		{
			printf("��¼�ɹ���");
		    break;
		}
		else
			printf("�������");
	}
	if(i==3)
		printf("�˳�����\n");
	return 0;
}
