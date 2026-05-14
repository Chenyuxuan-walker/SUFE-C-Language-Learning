#include<stdio.h>
void move(char from , char to) ;
void hanoi(int n , char start, char aux, char target) ;
int main()
{
    int n ;
    printf("请输入盘子的数量：") ;
    scanf("%d" , &n) ;
    printf("移动%d个盘子的步骤如下:\n" , n) ;
    hanoi(n,'A','B','C') ;
    return 0 ;
}
void move(char from , char to)
{
    printf("%c --> %c\n", from, to);
}
void hanoi(int n , char start ,char aux , char target)
{
    if(n==1)
    {
        move(start,target) ;
    }
    else 
    {
        hanoi(n-1,start,target,aux) ;
        move(start,target);
        hanoi(n-1,aux,start,target);
    }
}