#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
int main()
{
	/*���һ������, ��������l, ��߳�Ϊl�����������, ��ֱ��Ϊl��Բ����������.
		(0 < l < 1000, ȡ3.14, ������������λС��)
		��������:
	     3
		������� :
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
