// Using switch case make a calculator.
#include<stdio.h>
int main()
{
    char operations;
    double num1,num2;
    printf("enter operation(+,-,*,/):");
    scanf("%c",&operations);
    printf("enter num1 and num2:\n");
    scanf("%2lf%2lf",&num1,&num2);
    switch(operations)
    {
        case '+':
        printf("%2lf+%2lf=%2lf",num1,num2,num1+num2);
        break;
        case '-':
        printf("%2lf-%2lf=%2lf",num1,num2,num1-num2);
        break;
        case '*':
        printf("%2lf*%2lf=%2lf",num1,num2,num1*num2);
        break;
        case '/':
        printf("%2lf/%2lf=%2lf",num1,num2,num1/num2);
        break;
        default:
        printf("error operation");
    }
    return 0;
}