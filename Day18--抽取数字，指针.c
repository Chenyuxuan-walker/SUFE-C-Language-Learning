#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
int main()
{
    int numbers[1000];
    int m = 20;
    int position = -1;
    int *p, *p1, *p2; 
    srand(1);
    for (p = numbers; p < numbers + 1000; p++)
    {
        *p = rand() % 1000;
    }
    for (p1 = numbers; p1 < numbers + 999; p1++)
    {
        for (p2 = numbers; p2 < numbers + 999 - (p1 - numbers); p2++)
        {
            if (*p2 > *(p2 + 1))
            {
                swap(p2, p2 + 1); 
            }
        }
    }
    for (p = numbers; p < numbers + 1000; p++)
    {
        if (*p == m)
        {
            position = p - numbers; 
            break;
        }
    }
    if (position != -1)
    {
        printf("There is a number %d in this array,its position is %d .\n", m, position);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}