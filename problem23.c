// Using functions find Max and Min of a number.
#include<stdio.h>
void Max(int,int);
int main()
{
    int a,b;
    printf("enter a value: ");
    scanf("%d",&a);
    printf("enter b value: ");
    scanf("%d",&b);
    Max(a,b);
    return 0;
}
void Max(int a,int b)
{
    if(a>b)
    {
        printf("a is Maximum and b is Minimum.");
    }
    else if(b>a)
    {
        printf("b is Maximum and a is Minimum.");
    }
    else
    {
        printf("Both a and b are equal.");
    }
}