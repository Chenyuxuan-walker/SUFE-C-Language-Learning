#include<stdio.h>
#include<string.h>
struct Student_ 
{
    char *name_ ; 
    char sex_ ;
    double score_[3] ;
    double average_ ;
} ; 
struct Student_ teststruct(int n , struct Student_ student1_)
{
    struct Student_ student2_ ;
    int i ; 
    double ave = 0.0 ;
    student2_.name_ = student1_.name_ ; 
    for ( i = 0 ; i < n ; i++)
    {
        ave += student1_.score_[i] ;
        student2_.score_[i] = student1_.score_[i] ;
    }
    student2_.sex_ = student1_.sex_ ;
    student2_.average_ = ave/n ;
    return student2_ ;
}
int main()
{
    int i , n = 3 , score[3] ;
    struct Student_ student1, student2 ;
    score[0] = 60 , score[1] = 70 , score[2] = 90 ;
    student1.name_ = "liu" ;
    student1.sex_ = 'M' ;
    student1.average_ = 0.0 ; 
    for (i = 0 ; i < n ; i++) student1.score_[i] = score[i] ;
    student1.average_ = 0 ;
    printf("%s\n",student1.name_);
    for (i = 0 ; i < n ; i++) printf("%lf\t",student1.score_[i]) ;
    printf("\n%lf\n",student1.average_);
    student2 = teststruct(n,student1) ;
    printf("%s\n",student2.name_);
    for (i=0 ; i < n ; i++) printf("%lf\t",student2.score_[i]) ;
    printf("\n%lf\n",student2.average_) ;
    return 0 ;
}