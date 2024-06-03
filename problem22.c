// Using functions find diameter,area,circumference of a circle.
#include<stdio.h>
#include<math.h>
void area(int);
void circumference(int);
int main()
{
    int r;
    printf("enter radius: ");
    scanf("%d",&r);
    area(r);
    circumference(r);
    return 0;
}
void area(int x)
{
    float area;
    area=3.14*x*x;
    printf("area is %f.\n",area);
}
void circumference(int c)
{
    float circumference=2*3.14*c;
    printf("circumference of circle is %f.\n",circumference);
    int diameter;
    diameter=c+c;
    printf("diameter of circle is %d.",diameter);
}