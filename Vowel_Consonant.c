#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("%c\n Is a vowel",ch);
    else if(ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U')
    printf("%c\n is a vowel",ch);
    else 
    printf("%c\n is a consonant",ch);
}