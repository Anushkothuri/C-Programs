// Using functions find given number is even or odd.
#include<stdio.h>
void EvenOdd(int);
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    EvenOdd(a);
    return 0;
}
void EvenOdd(int a)
{
    if(a%2==0)
    {
        printf("%d is even number.",a);
    }
    else if(a<0)
    {
        printf("Invalid number.");
    }
    else
    {
        printf("%d is odd number.",a);
    }
}