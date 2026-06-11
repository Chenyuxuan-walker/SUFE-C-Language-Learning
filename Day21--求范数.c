#include<stdio.h>
#include<stdlib.h>
int L1norm(int *matrix, int n, int m);
int main() 
{
   int  i;
   int  A[600];
   srand(10);
   for(i=0;i<600;i++) A[i]=rand()%100;
   int result_norm = L1norm(A, 20, 30);
   printf("The 1-norm of the 20x30 matrix A is: %d", result_norm);   
   return 0;
}
int L1norm(int *matrix, int n, int m) {
    int max_sum = 0; 
    for (int j = 0; j < m; j++) 
    {
        int current_col_sum = 0; 
        for (int i = 0; i < n; i++) 
        {
            int value = matrix[i * m + j];
            if (value < 0) 
            {
                value = -value;
            }
            current_col_sum += value;
        }
        if (current_col_sum > max_sum) 
        {
            max_sum = current_col_sum;
        }
    }
    return max_sum; 
}