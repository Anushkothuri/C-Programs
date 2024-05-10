// C Program to calculate sum of input numbers given by user.
//Using Functions. 
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
int sum(int x,int y)
{
    int res=x+y;
    printf("sum is %d.",res);
    return 0;
}