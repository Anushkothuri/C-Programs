// Area and circumference of  a circle.
#include<stdio.h>
int main()
{
    int radius,circumference;
    float area;
    float pi=3.14;
    printf("enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("area is %f\n",area);
    printf("circumference is %d",circumference);
    return 0;
}