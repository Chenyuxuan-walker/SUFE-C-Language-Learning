#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int A[4][25];
    int B[4][25];
    int BT[25][4];
    int C[4][4];
    srand(1);
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 25; j++) 
        {
            *(*(A + i) + j) = rand() % 101; 
        }
    }
    srand(1000);
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 25; j++) 
        {
            *(*(B + i) + j) = rand() % 101;
        }
    }
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 25; j++) 
        {
            *(*(BT + j) + i) = *(*(B + i) + j);
        }
    }
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            *(*(C + i) + j) = 0; 
            for (int k = 0; k < 25; k++) 
            {
                *(*(C + i) + j) += (*(*(A + i) + k)) * (*(*(BT + k) + j));
            }
        }
    }
    printf("计算完成！矩阵 A(4x25) 乘 矩阵 B'(25x4) 的结果矩阵 C(4x4) 如下：\n\n");
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("%8d ", *(*(C + i) + j)); 
        }
        printf("\n");
    }
    return 0;
}