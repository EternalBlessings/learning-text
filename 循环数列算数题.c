#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
int main()
{
	/*【简单循环】2.张三上课时走神, 在作业上写了很多222222222222222 结果被老师发现了
		张三连忙掩饰说自己在算2 + 22 + 222 + 2222 + 22222的和,
		老师很欣慰, 问他算出来没有
		张三很困扰, 因为草稿纸写满了2 已经不够用了
		大家快帮帮张三吧设计一个程序, 输入n和a 求Sn 
        Sn = a + aa + aaa + … + aaaaa(n个a) 
       输入: 两个整数n, a 
       (1<n<9), (1<=a<=9) 
       输出: 
       Sn的值 
       样例输入: 
       5 2 
       样例输出: 
       24690 
       样例解析: Sn = 2 + 22 + 222 + 2222 + 22222 = 24690
       样例输入: 
       4 5 
       样例输出: 
       6170 
       样例解析: Sn = 5 + 55 + 555 + 5555
      */
	int n;
	int a;
	long long sn=0;
	long long num = 0;

	printf("Input数字n和a求sn，其中1<n<9: ");
	scanf("%d %d", &n,&a);
	printf("%d\n", n);
	printf("%d\n", a);
	if (1 <= a <= 9|| 1 << n << 9)
	{
		for (int i = 0; i < n; i++)
		{
			num = num * 10 + a;
			sn = sn + num;

		}
		printf("output%lld\n", sn);
	}
	else 
	{
	  printf("重新输入\n");
	}
	return 0;
}