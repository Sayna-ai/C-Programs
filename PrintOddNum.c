#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Odd numbers between 1 and %d :\n",n);
    for(i=1;i<=n;i+=2)
    printf("%d ",i);
    return 0;
}