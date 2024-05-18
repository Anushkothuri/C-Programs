// Usage of sizeof operator.
#include<stdio.h>
void dataTypes(int,float,double,long long);
int main()
{
    int a=5;
    float b=5.0;
    double c=2.632424;
    long long d=4;
    dataTypes(a,b,c,d);
    return 0;
}
void dataTypes(int a, float b, double c, long long d){
    // Using %zu over %d, because size is always in positive (unsigned) --> %zu.
    // %d indicates all signs includes negative, so it is better practice to use %zu.
    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(b));  
    printf("%zu\n",sizeof(c));
    printf("%zu\n",sizeof(d));
}