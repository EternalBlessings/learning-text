#include<stdio.h>
int main()
{/*定义float，double，long double数据类型的变量
 float 单精度小数（精确度小数点后6位）window占4个字节（38位）*/
	float a = 3.14F;
	printf("%f\n", a);
	//保留小数点后几位就写.几
	float b = 3.14F;
	printf("%.2f\n", b);

	/*double双精度小数，小数点后15位，windows占8个字节（308位）*/
	double  c = 1.78;
	printf("%lf\n",c);

	double  d = 1.78;
	printf("%.2lf\n", d);

	/*long double 高精度小鼠，小数点后18-19，windows占8字节，其他12，16*/
	long double e = 3.1415926l;
	printf("%.2lf\n", e);
	//sizeof 测量每一种数据类型占用多少字节
	printf("%zu\n", sizeof (float));
	printf("%zu\n", sizeof(b));

	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(d));

	printf("%zu\n", sizeof(long double));
	printf("%zu\n", sizeof(e));

	/*小鼠的数据类型无法和unsigned组合使用*/

	//定义char数据类型变量
	//char字符取值范围ascll码表所有内容windows1字节
	char c1 = 'a';
	printf("%c\n", c1);

	char c2 = '1';
	printf("%c\n", c2);

	char c3 = 'A';
	printf("%c\n", c3);

	char c4 = '.';
	printf("%c\n", c4);
	/*利用sizeof测量占用多少字节*/
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(c1));

	/*整数类型：short int，long，longlong。格式：数据类型 变量名=数据值*/
	//short短整型，windows2字节（-32768~32767）
	 short a1 = 10;
		printf("%d\n",a1 );

	//int整数，windows4字节（-2147483648~2147483647）
		int a2 = 100;
		printf("%d\n", a2);


	//long长整型，windows4字节（-2147483648~2147483647）
		//linux 32位4字节 64位8位
		long a3 = 1000l;
		printf("%ld\n", a3);//需要后缀l

//longlong（c99）超长整型，windows 8个字节（19位数）
  long long a4 = 10000ll;
  printf("%lld\n", a4);



	return 0;
}