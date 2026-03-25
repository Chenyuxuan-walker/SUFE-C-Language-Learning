#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool issquare(long long num)
{
    if(num<0)
        return false;
    long long root = (long long)round(sqrt(num));
    return (root * root == num);
}
int main()
{
    int pair = 0;
    long long q = 1;
    while( pair < 10)
    {
        long long temp = 1 + 8 * q * q;
        if(issquare(temp))
            {
                long long p = (long long)sqrt(temp);
                pair++;
                printf("µÚ%d¶Ô:p=%lld,q=%lld\n",pair,p,q);
            }
        q++;
    }
    return 0;
}