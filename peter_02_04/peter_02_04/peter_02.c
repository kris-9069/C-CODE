#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char arr[20]={0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码:>");
		scanf("%s",&arr);
		if(0==strcmp(arr,"123456"))
		{
			printf("登录成功！");
		    break;
		}
		else
			printf("输入错误");
	}
	if(i==3)
		printf("退出程序\n");
	return 0;
}
