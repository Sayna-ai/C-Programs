#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides pf triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    {
        printf("Valid Triangle\n");
        if(s1==s2 && s2==s3)
        printf("Type: Equilateral Triangle");
        else if (s1==s2|| s2==s3 || s1==s3)
        printf("Type: Isosceles Triangle");
        else
        printf("Type: Scalene Triangle");
    }
    else
    {
        printf("Not a Valid Triangle");
    }
    return 0;
}