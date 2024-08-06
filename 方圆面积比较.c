#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
int main()
{
	/*设计一个程序, 输入整数l, 求边长为l的正方形面积, 比直径为l的圆形面积大多少.
		(0 < l < 1000, 取3.14, 输出结果保留两位小数)
		样例输入:
	     3
		样例输出 :
		1.93    */

	int num1=1;
	double numPI= 3.14;
	double numr = 0.5;
	double rectangle  = numr * numr * numPI;
	double circular = num1 * num1;
    double difference = circular - rectangle;

	printf("%.2lf\n", difference);
	
	return 0;
}
