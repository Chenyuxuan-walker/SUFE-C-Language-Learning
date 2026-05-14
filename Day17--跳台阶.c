#include <stdio.h>
int jump(int n);
int main() {
    int n;
    printf("请输入台阶数：");
    scanf("%d", &n);
    printf("跳上 %d 级台阶共有 %d 种跳法。\n", n, jump(n));
    return 0;
}
int jump(int n)
{
    if (n==1)
    {
        return 1 ;
    }
    else 
    {
        if(n==2)
        {
            return 2 ;
        }
        else
        {
            return jump(n-1)+jump(n-2) ;
        }
    }
}