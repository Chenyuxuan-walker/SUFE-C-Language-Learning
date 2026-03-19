#include <stdio.h>
// 之前我们采用了暴力枚举法来解决取最大公约数和最小公倍数的方法，接下来，我们用辗转相除法求最大公因数
int getGCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = a % b; 
        a = b;            
        b = temp;         
    }
    return a; 
}
int main() 
{
    int num1, num2;
    
    printf("请输入两个正整数（用空格隔开）: ");
    scanf("%d %d", &num1, &num2);
    int result1 = getGCD(num1, num2);
    int result2 = num1/result1*num2;//两数的乘积等于最大公约数乘以最小公倍数.先进行除法是因为防止输入的数字过大导致溢出
    printf("%d 和 %d 的最大公因数是: %d\n", num1, num2, result1); 
    printf("%d 和 %d 的最小公倍数是：%d\n", num1, num2, result2);
    return 0;
}