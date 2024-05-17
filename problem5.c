// Maximum of 4 numbers.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("%d is greater",a);
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("%d is greater",b);
            }
        }
    }
    if(c>d)
    {
        printf("%d is greater",c);
    }
    else
    {
        printf("%d is greater",d);
    }
    return 0;
}