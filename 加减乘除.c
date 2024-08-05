#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
/*题目：定义加减乘除四个函数，键盘录入3个数字，
 前两个表示参与计算的数字，第三表示调用的函数
 1加
 2减
 3乘
 4除

 */


//定义函数
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
    //定义一个数组装四个函数的指针,函数指针数组
    int(*arr[4])(int, int) = { add, subtract ,mutiply ,divide };
    //用户录入三个数据
    int num1;
    int num2;
    printf("请录入两个数字参与计算：\n");
    scanf("%d%d", &num1, &num2);
   
    printf("%d\n",num1);
    printf("%d\n", num2);

    int choose;
    printf("请录入一个数字表示进行的计算：\n");
    scanf("%d", &choose);
    //根据选择不同，来调用不同函数
    int res = (arr[choose - 1])(num1,num2);
    //
    printf("%d\n", res);

    

    return 0;
}