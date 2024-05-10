// Check whether given number is Prime number or not.
// Using functions.
#include<stdio.h>
int Prime(int);
int main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    Prime(n);
    return 0;
}
int Prime(int n)
{
    if(n%1==0&&n%n!=0)
    printf("%d is a Prime number.",n);
    else
    printf("%d is not a Prime number.",n);
    return 0;
}