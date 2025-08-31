#include <stdio.h>
int main()
{
    int n,d,temp,sum;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp=n;
    d=temp%10;
    while(temp>0)
    {
        sum+=temp%10;
        temp/=10;
    }
    if(d%2==0)
    {
        if (sum%3==0)
        printf("%d is divisible by both 2 and 3\n",n);
        else
        printf("%d is divisible by 2 only\n ",n);
    }
    else if(sum%3==0)
    {
        printf("%d is divisible by 3 only\n ",n);
    }
    else
    printf("%d is not divisible by 2 or 3\n",n);
    return 0;
}