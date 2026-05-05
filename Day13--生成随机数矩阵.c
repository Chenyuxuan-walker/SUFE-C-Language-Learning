//generate random numbers uniformly
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i , x[100] ;
    double a[100] , b[4][25] , c[25][4] , seed = 1 ;
    srand(seed+1);
    for(i=0 ; i<100 ; i++)
    {
        x[i] = rand() ;
    }
    for(i=0 ; i<100 ; i++)
    {
        if(!(i%10))
        {
            printf("\n") ;
        }
        printf("%d\t",x[i]) ;
    }
    printf("\n");
    srand(seed);
    for(i=0 ; i<100 ; i++)
    {
        a[i] = (rand()%100)/100.0 ;
    }
    for(i=0 ; i<100 ; i++)
    {
        if(!(i%10))
        {
            printf("\n")
        }
        printf("%5.2f",a[i]);
    }
    printf("\n");
}