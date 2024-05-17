// Using conditional statements displaying grade based on following data:
/* 90-100   : grade A
   80-89    : grade B
   70-79    : grade C
   60-69    : grade D
   Below 60 : grade F i.e,,"fail" */
#include<stdio.h>
int main()
{
    char grade;
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=90&&marks<=100)
    printf("Grade A");
    else if(marks<90&&marks>=80)
    printf("Grade B");
    else if(marks<80&&marks>=70)
    printf("Grade C");
    else if(marks<70&&marks>=60)
    printf("Grade D");
    else if(marks<60&&marks>=0)
    printf("Grade F");
    else
    printf("invalid marks");
    return 0;
}