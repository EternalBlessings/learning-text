#include<stdio.h>
int main()
{/*����float��double��long double�������͵ı���
 float ������С������ȷ��С�����6λ��windowռ4���ֽڣ�38λ��*/
	float a = 3.14F;
	printf("%f\n", a);
	//����С�����λ��д.��
	float b = 3.14F;
	printf("%.2f\n", b);

	/*double˫����С����С�����15λ��windowsռ8���ֽڣ�308λ��*/
	double  c = 1.78;
	printf("%lf\n",c);

	double  d = 1.78;
	printf("%.2lf\n", d);

	/*long double �߾���С��С�����18-19��windowsռ8�ֽڣ�����12��16*/
	long double e = 3.1415926l;
	printf("%.2lf\n", e);
	//sizeof ����ÿһ����������ռ�ö����ֽ�
	printf("%zu\n", sizeof (float));
	printf("%zu\n", sizeof(b));

	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(d));

	printf("%zu\n", sizeof(long double));
	printf("%zu\n", sizeof(e));

	/*С������������޷���unsigned���ʹ��*/

	//����char�������ͱ���
	//char�ַ�ȡֵ��Χascll�����������windows1�ֽ�
	char c1 = 'a';
	printf("%c\n", c1);

	char c2 = '1';
	printf("%c\n", c2);

	char c3 = 'A';
	printf("%c\n", c3);

	char c4 = '.';
	printf("%c\n", c4);
	/*����sizeof����ռ�ö����ֽ�*/
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(c1));

	/*�������ͣ�short int��long��longlong����ʽ���������� ������=����ֵ*/
	//short�����ͣ�windows2�ֽڣ�-32768~32767��
	 short a1 = 10;
		printf("%d\n",a1 );

	//int������windows4�ֽڣ�-2147483648~2147483647��
		int a2 = 100;
		printf("%d\n", a2);


	//long�����ͣ�windows4�ֽڣ�-2147483648~2147483647��
		//linux 32λ4�ֽ� 64λ8λ
		long a3 = 1000l;
		printf("%ld\n", a3);//��Ҫ��׺l

//longlong��c99���������ͣ�windows 8���ֽڣ�19λ����
  long long a4 = 10000ll;
  printf("%lld\n", a4);



	return 0;
}