#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter a number:\n");
    scanf("%d",&n);
    r=n*(n+1);
    printf("Sum of first %d even numbers: %d",n,r);
    return 0;
}