//calculate 1/2019 with 100-digit precesion
#include<stdio.h>
void solution1(int numerator , int denominator , int precision) ;
int main()
{
    solution1(1,2019,100) ;
    return 0 ;
}
void solution1(int numerator , int denominator , int precision)
{
    int current = numerator ;
    for(int i = 0; i <= precision ; i++)
    {
        int digit = current / denominator;
        printf("%d",digit);
        if(i==0)
        {
            printf(".");
        }
        current = (current%denominator)*10 ;
    }
}
