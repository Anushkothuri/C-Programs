// Using functions compute division of a and b.
#include<stdio.h>
double compute(double,double);
int main()
{
    double a=5;
    double b=2;
    double res;
    res=compute(a,b);
    return 0;
}
double compute(double a,double b)
{
    double res=(a/b);
    printf("%lf",res);
    return 0;
}