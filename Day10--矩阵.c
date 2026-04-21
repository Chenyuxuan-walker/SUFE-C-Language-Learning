#include<stdio.h>
#include<math.h>
void rand_def(double *p , int n , double *r) ;
void exercise_1() ;
void exercise_2() ;
int main()
{
    exercise_1() ;
    exercise_2() ;
    return 0 ;
}
void rand_def(double *p ,int n , double *r) 
{
    int i , m ;
    double s, u, v ;
    s = 65536.0 ; 
    u = 2053.0 ;
    v = 13849.0 ;
    for(i = 0 ; i <= n-1 ; i++)
    {
        *r = u *(*r) + v ;
        m = (int)(*r/s) ; 
        *r = *r - m*s ; 
        p[i] = *r / s ;
    }
}
void exercise_1()
{
    printf("------ exercise 1 ------\n") ;
    double r = 1.0 ;
    double p[100] ;
    int n = 100 ;
    rand_def(p , 100 , &r) ;
    double sum = 0.0 ; 
    for (int i = 0 ; i < n ; i ++ )
    {
        sum += p[i] ;
    }
    double mean = sum / n ;
    double var_sum = 0.0 ;
    for(int i = 0 ; i < n ; i++)
    {
        var_sum += (p[i] - mean)*(p[i] - mean) ;
    }
    double variance = var_sum / (n - 1) ;
    printf("The mean of these samples is %f\n", mean) ;
    printf("The variance of the samples is %f\n", variance) ;
}
void exercise_2()
{
    printf("------ Exercise 2 ------\n");
    int total_elements = 100 ;
    double A1[100] ; 
    double B1[100] ;
    double rA = 1.0 ;
    double rB = 1000.0 ;
    rand_def(A1 , total_elements , &rA) ;
    rand_def(B1 , total_elements , &rB) ;
    double C1[16] ;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            C1[i * 4 + j] = 0 ;
            for(int k = 0 ; k < 25 ; k++)
            {
                C1[i * 4 + j] += A1[i * 25 + k] * B1[j * 25 + k] ;
            }
        }
    }
    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            printf("%8.4f ", C1[i * 4 + j]);
        }
        printf("\n");
    }
    printf("\n");
    double A2[4][25] ;
    double B2[4][25] ;
    int index = 0 ;
    double C2[4][4] ;
    for(int i = 0 ; i < 4 ; i++)
    {
        for (int j = 0 ; j < 25 ; j++)
        {
            A2[i][j] = A1[index] ;
            B2[i][j] = B1[index] ;
            index ++ ;
        }
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            C2[i][j] = 0 ;
            for(int k = 0 ; k < 25 ; k++)
            {
                C2[i][j] += A2[i][k] * B2[j][k] ;
            }
        }
    }
    for(int i= 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {  
            printf("%8.4f ", C2[i][j]) ;
        }
        printf("\n") ;
    }
}
