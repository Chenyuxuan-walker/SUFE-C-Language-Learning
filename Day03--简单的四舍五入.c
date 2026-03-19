#include <stdio.h>
// 自己写的四舍五入函数（针对正整数）,非常简单，只是普通练习，现在只需要调用math函数库
int myRound(double num) 
{
    return (int)(num + 0.5); 
}
int main() 
{
    double a = 3.4;
    double b = 3.5;
    double c = 3.9;
    printf("%.1f 四舍五入后是: %d\n", a, myRound(a)); // 结果 3
    printf("%.1f 四舍五入后是: %d\n", b, myRound(b)); // 结果 4
    printf("%.1f 四舍五入后是: %d\n", c, myRound(c)); // 结果 4
    return 0;
}