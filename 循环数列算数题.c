#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
int main()
{
	/*����ѭ����2.�����Ͽ�ʱ����, ����ҵ��д�˺ܶ�222222222222222 �������ʦ������
		������æ����˵�Լ�����2 + 22 + 222 + 2222 + 22222�ĺ�,
		��ʦ����ο, ���������û��
		����������, ��Ϊ�ݸ�ֽд����2 �Ѿ���������
		��ҿ������������һ������, ����n��a ��Sn 
        Sn = a + aa + aaa + �� + aaaaa(n��a) 
       ����: ��������n, a 
       (1<n<9), (1<=a<=9) 
       ���: 
       Sn��ֵ 
       ��������: 
       5 2 
       �������: 
       24690 
       ��������: Sn = 2 + 22 + 222 + 2222 + 22222 = 24690
       ��������: 
       4 5 
       �������: 
       6170 
       ��������: Sn = 5 + 55 + 555 + 5555
      */
	int n;
	int a;
	long long sn=0;
	long long num = 0;

	printf("Input����n��a��sn������1<n<9: ");
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
	  printf("��������\n");
	}
	return 0;
}