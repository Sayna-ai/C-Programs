#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
    printf("%c is Uppercase",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("%c is Lowercase",ch);
    }
    else 
    printf("Invalid Input");
}