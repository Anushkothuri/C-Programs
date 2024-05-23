#include<stdio.h>

int main() {
    int n, reversedNumber = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use a copy of the original number to perform operations
    int originalNumber = n;
    
    for(; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    printf("Reversed Number: %d\n", reversedNumber);
    
    return 0;
}

