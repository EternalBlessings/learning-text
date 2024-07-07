#include<stdio.h>
int main()
{/*1定义格式：数据类型 变量名
 2赋值/修改值：变量名=修改值*/
	/*int a;
	a = 10;
	printf("%d\n", a);*/
	//如果定义时候，已经知道变量中存储数据
	//int b = 20;
	//printf("%d\n",b);
	
	//text:两个数相加（变量参与计算）
	/*int c = 10;//（方法1）
	int d = 20;
	printf("%d\n",c+d);
	int e = c + d;//（方法2）
	printf ("%d\n",e);*/


	//text：角色血量是个变值，用blood记录
	/*假设初始100，对战受到80伤害，
	技能恢复60血量。求最终血量*/
	int blood = 100;
		blood = blood - 80;
		blood = blood + 60;
		printf("%d\n", blood);
	return 0;
}