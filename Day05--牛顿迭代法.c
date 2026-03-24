#include<stdio.h>
#include<math.h>//调用fabs函数
int main()
{
    double a=2.0;
    double x_old = 1.0;//随机给个数
    double x_new;
    while(1)//不断迭代
    {
        x_new = 0.5* (x_old+ a/x_old) ;  //核心算法
        if(fabs(x_new - x_old) < 1e-10)//判断精度
            break;
        x_old = x_new;//将新值赋值给老值
    }
    printf("牛顿迭代法算出的根号2的值为%.10lf",x_new);
    return 0;
}