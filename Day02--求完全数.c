//输入一个数n输出 1到n之间所有的“完全数”，每个数字占一行。
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//输入正整数n
    for(int i=1; i<=n; i++)//外层循环遍历1到n
    {
        int sum=0;
        for(int j=1; j<i;j++)//内层循环求真因数
        {
            if(i%j==0)
                sum=sum+j;//累加判断
        }
        if (sum==i)
        printf("%d\n",i);//输出完全数        
    }
    return 0;
}