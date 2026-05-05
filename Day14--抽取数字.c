//编一个程序用 srand(1);和 rand();抽取 1000 个 0-999 之间的数，然后从小到达排序。再在这 1000 个整数中查找 m=20 的位置。如果 20 不在这1000 个数中，请输出-1
#include <stdio.h>
#include <stdlib.h>
void swap(int*a , int*b) ;
int main()
{
    int numbers [1000] ;
    int m = 20 ;
    int position = -1 ;
    srand(1) ;
    for(int i = 0 ; i < 1000 ; i++)
    {
        numbers[i] = rand( )%1000 ;
    }
    for(int i = 0 ; i < 999 ; i++)
    {
        for (int j = 0 ; j < 999 - i ; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                swap(&numbers[j] , &numbers[j+1]) ;
            }
        }
    }
    for (int i = 0 ; i < 1000 ; i++)
    {
        if(numbers[i]==m)
        {
            position = i ;
            break ;
        }
    }
    if (position != -1)
    {
        printf("There is a number %d in this array,its position is %d",m,position) ;
    }
    else
    {
        printf("-1\n") ;
    }
    return 0 ;
}
void swap(int *a , int *b)
{
    int temp ;
    temp = *a ;
    *a= *b ;
    *b = temp ;
}
