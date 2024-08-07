#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
int main()
{
	/*【判断】1.东东哥上班
		东东哥在上班途中, 可以选择走路和骑车两种方式
		但他不清楚哪种方式比较快, 因为骑车需要找车, 开锁, 停车 需要耽搁很多时间.
		设找到自行车, 开锁, 骑上自行车需要花27秒, 停车需要花23秒
		步行每秒1.2米, 骑车每秒3.0米
		给出东东哥距离公司的距离, 请问是骑车快还是走路快.
		输入一个整数n, 表示到公司的距离
		如果骑车快, 输出"骑车"
		如果走路快, 输出"走路"
		如果一样快, 输出"一样快"
		样例输入:
	60
		样例输出 :
		走路*/
	int n;
	printf("Input距离n: ");
	scanf("%d", &n);
	printf("%d\n", n);
	double ridetime=n/3.0+27+23;
	double walktime=n/1.2;
	if (ridetime < walktime)
	{
		printf("走路快 \n");
	}
	else if(ridetime > walktime)
	{
		printf("骑车快\n");
	}
	else
	{
		printf("一样快\n");
	}
	return 0;
}