#include<stdio.h>
#define N 7
struct LinkedList
{
    int value ;
    struct LinkedList *next ;
} ;
void Josephus(struct LinkedList *list, int n, int gap)
{
    int j , count = n ;
    struct LinkedList *pt = list , *delete_i = list ;
    while (count >= gap) 
    {
        for (j=0 ; j<gap-2 ; j++)   pt = pt ->next ;
        delete_i = pt ->next ;
        pt ->next = delete_i ->next ;
        printf("%d\n",delete_i ->value) ;
        pt = delete_i ->next ;
        count -- ;
    }
}
int main()
{
    int i , gap = 3 , arr[] = {1,2,3,4,5,6,7} ;
    struct LinkedList list[N] , *pt=list ;
    for (i=0 ; i<N ; i++)
    {
        arr[i] = i + 1 ;
    }
    for (i = 0 ; i < N-1 ; i++,pt++)
    {
        pt ->value = arr[i] ;
        pt ->next = pt + 1 ;
    }
    pt ->next = list ;
    pt ->value = arr[i] ;
    Josephus(list, 7, gap);
    return 0 ;
}