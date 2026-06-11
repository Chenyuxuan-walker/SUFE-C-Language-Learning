#include <stdio.h>
#include <math.h>
int main() {
    long long results[10][2]; 
    long long (*ptr)[2] = results; 
    int count = 0;
    long long q = 1;
    while (count < 10) 
    {
        long long temp = 8 * q * q + 1;
        long long p = (long long)round(sqrt(temp)); 
        
        if (p * p == temp) 
        {
            (*ptr)[0] = p; 
            (*ptr)[1] = q; 
            ptr++;         
            count++;
        }
        q++;
    }
    printf("The first 10 pairs of (p, q) for the equation p^2 - 8q^2 = 1:\n");
    printf("--------------------------------------------------\n");
    ptr = results; 
    for (int i = 0; i < 10; i++) 
    {
        printf("Pair %2d: p = %-10lld, q = %-10lld\n", i + 1, *(*(ptr + i) + 0), *(*(ptr + i) + 1));
    }
    printf("--------------------------------------------------\n");
    return 0;
}