//猴子吃桃问题（第五章习题 12）：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃了一半，又多吃了一个。以后每天早上都吃前一天剩下的一半，并再多吃一个。到第 10天早上想再吃桃子时，发现只剩下一个桃子了。求猴子第一天共摘了多少个桃子？
#include<stdio.h>
int get_peaches(int day) ;
int main()
{
    int total_peaches ;
    total_peaches = get_peaches(1) ;
    printf("The monkey ate %d peaches on the first day\n" , total_peaches) ;
    return 0 ;
}
int get_peaches(int day)
{
    if (day == 20)
    {
        return 1 ;
    }
    else
    {
        return (get_peaches(day+1)+1)*2 ;
    }
}