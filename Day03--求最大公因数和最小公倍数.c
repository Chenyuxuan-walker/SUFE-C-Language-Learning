#include<stdio.h>
//定义取小函数
int MIN(int a , int b)
{
    if (a<b)
        return a;
    else
        return b;
}
//定义取大函数
int MAX(int a , int b)
{
    if (a>b)
        return a;
    else    
        return b;
}
int main()
{
    int m, n;
    int num,NUM;
    scanf("%d %d", &m,&n);//输入两个数
    int min=MIN(m,n);
    int max=MAX(m,n);
    for(int i=min; i>=1; i--)//一层循环取最大公因数，从大往小取
    {
        if(m%i==0&&n%i==0)//判断是否为最大公因数
            {
                num=i;
                break;
            }
    }
    for(int i=max; ;i++)//一层循环取最小公倍数，从小往大取
    {
        if(i%m==0&&i%n==0)
        {
            NUM=i;
            break;
        }
    }
    printf("最大公因数为%d\n", num);
    printf("最小公倍数为%d\n", NUM);
    return 0;
}
