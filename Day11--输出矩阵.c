#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i , j , k ;
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} ;
    printf("a=\n") ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("%d\t",a[i][j]) ;
        }
        printf("\n") ;
    }
    int b[2][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    printf("b=\n") ; 
    for(int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
            {
                printf("%p\t" , b[i][j]) ;
            }
        printf("\n") ;
    }
    return 0 ;
}