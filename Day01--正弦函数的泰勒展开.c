#include<stdio.h>
#include<math.h>
//定义阶乘函数
double getFactorial(int n)
{
    double fact=1.0;
    for(int i=1; i<=n; i++)
    {
        fact =fact*i;
    }
    return fact;
}
int main()
{
    double x;
    int sign = 1;//定义符号变量
    double sum =0.0 ;//累和
    printf("请输入你的sin（x）值（弧度制）:");
    scanf("%lf",&x);
    for(int i=1; i<=10; i++)
    {
        int n = 2*i-1;
        double term = sign*pow(x,n)/getFactorial(n);//调用阶乘函数以及次方函数
        sum = sum + term;//累加求和
        sign = sign*(-1);
    }
    printf("你手写的泰勒级数计算结果：sin(%lf)=%lf",x,sum);
    return 0;
}