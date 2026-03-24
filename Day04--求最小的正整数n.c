//输入一个正整数n，使得n/2是某个数的平方，n/3是某个数的立方
#include<stdio.h>
#include<math.h>
#include <stdbool.h>
bool issquare(long long num)//定义判断平方数函数
{
    if(num<0)
        return false;
    long long root=(long long)round(sqrt(num));
    return (root*root == num);
}
bool iscube(long long num)//定义判断立方数函数
{
    if(num<0)
        return false;
    long long root=(long long)round(cbrt(num));
    return (root*root*root == num);
}
int main()
{
    for(long long n=6; ;n+=6)//能被2和3整除的数必然被6整除
    {
        if(issquare(n/2) && iscube(n/3))//两者均为正，则即为最小整数
        {
            printf("最小的正整数为%lld\n",n);
            printf("%lld是%lld的平方\n",n/2,(long long)round((sqrt(n/2))));
            printf("%lld是%lld的立方\n",n/3,(long long)round((cbrt(n/3))));
            break;
        }
    }
    return 0;
}