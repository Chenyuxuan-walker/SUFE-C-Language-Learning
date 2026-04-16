//find the root of the euqation 
//2x^3 - 4x^2 + 3x - 6 = 0
//search by Newton's method
#include<stdio.h>
#include<math.h>
double function (double n) ;
int main()
{
    double x0,x1,x2,fx0,fx1,fx2;
    do
    {
        printf("Please enter x1 and x2");
        scanf("%f,%f", &x1,&x2);
        fx1 = function (x1) ;
        fx2 = function (x2) ;
    } while (fx1*fx2>=0);
    do
    {
        x0 = (x1 + x2) / 2 ;
        fx0 = function (x0) ;
        if(fx0*fx1<0)
            {
                x2 = x0 ;
                fx2 = fx0 ;
            }
        else
            {
                x1 = x0 ;
                fx1 = fx0 ;
            }
    } while (fabs(fx0)>1e-5);
    printf("%lf",x0) ;
    return 0;
}
double function (double n)
{
    return 2*n*(n*n-2*n)+3*n-6 ;
}