#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
/*��Ŀ������Ӽ��˳��ĸ�����������¼��3�����֣�
 ǰ������ʾ�����������֣�������ʾ���õĺ���
 1��
 2��
 3��
 4��

 */


//���庯��
int add(int num1, int num2)
{
    return num1 + num2;
}
int subtract(int num1, int num2)
{
    return num1 - num2;
}
int mutiply(int num1, int num2)
{
    return num1 * num2;
}
int divide(int num1, int num2)
{
    return num1 / num2;
}



int main()
{
    //����һ������װ�ĸ�������ָ��,����ָ������
    int(*arr[4])(int, int) = { add, subtract ,mutiply ,divide };
    //�û�¼����������
    int num1;
    int num2;
    printf("��¼���������ֲ�����㣺\n");
    scanf("%d%d", &num1, &num2);
   
    printf("%d\n",num1);
    printf("%d\n", num2);

    int choose;
    printf("��¼��һ�����ֱ�ʾ���еļ��㣺\n");
    scanf("%d", &choose);
    //����ѡ��ͬ�������ò�ͬ����
    int res = (arr[choose - 1])(num1,num2);
    //
    printf("%d\n", res);

    

    return 0;
}