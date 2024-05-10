// Finding Maximum of three numbers given by user.
// Using functions.
#include<stdio.h>
int Max(int,int,int);
int main()
{
    int a,b,c;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter c value:");
    scanf("%d",&c);
    Max(a,b,c);
    return 0;
}
int Max(int a,int b,int c)
{
    if(a>b && a>c)
    printf("%d is Maximum",a);
    else if(a<b&&c<b)
    printf("%d is Maximum",b);
    else
    printf("%d is Maximum",c);
    return 0;
}