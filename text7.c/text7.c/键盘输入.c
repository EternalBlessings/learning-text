#define _CRT_SECURE_NO_WARNINGS
//输入scanf有安全隐患，必须加上no wanings，与越过防火墙类似
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	//输入指令
	printf("%d\n", a);
	return 0;
}