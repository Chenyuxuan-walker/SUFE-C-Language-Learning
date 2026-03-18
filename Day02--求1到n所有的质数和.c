#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=2; i<=n;i++)//外层循环：从2遍历到n；
    {
        int a=1;//假设该数为质数，a相当于质数判别器
        for(int j=2; j<i; j++)//内层循环：葱2遍历到i;
            {
                int b=i%j;//将i取模j,判断是否整除
                if(b==0)
                    {
                        a=0;//如果该数不是质数，则把0赋值给a
                        break;
                    }
            }
        if(a==1)
            sum=sum+i;//a判定为1代表为质数，放进累加sum
    }
    printf("%d",sum);
    return 0;
}