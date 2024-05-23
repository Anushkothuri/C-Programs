// Checking vote eligibility using if else statements.
#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18)
    printf("Eligible for Vote.");
    else
    printf("Not eligible.");
    return 0;
}