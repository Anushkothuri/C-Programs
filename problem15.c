// Using conditional statements check given character is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'
    ||ch=='O'||ch=='U')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}