// Find factorial of a given number.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=1;
    if(n<0)
    printf("invalid number.");
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("%d is factorial of %d.",fact,n);
    }
    return 0;
}