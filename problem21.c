#include<stdio.h>
void cube(int);
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    cube(a);
    return 0;
}
void cube(int a)
{
    int res;
    res=a*a*a;
    printf("%d",res);
}