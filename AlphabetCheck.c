#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'|| ch>='a'&& ch<='z' )
    {
        printf("Is an alphabet\n");
        if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'||ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'||ch=='U')
            printf("%c is a vowel\n",ch);
        else if(ch>='A' && ch<='Z'|| ch>='a'&& ch<='z' )
            printf("%c is a consonant\n",ch);
    }
    else 
    printf("Isn't a alphabet\n");
}