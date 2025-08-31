#include <stdio.h>
int main()

{
    int ch,n,num;
    printf("Enter a number\t");
    scanf("%d",&num);
    n=num;
    printf("MENU for Divisibility Check\n");
    printf("1.Divisibility by 3\n2.Divisibility by 5\n3.Divisibility by 7\n4.Divisibility by 9\n5.Divisibility by 11\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            int d,sum;
            sum=0;
            while(n>0){
            d=n%10;
            sum+=d;
            n/=10;
            }
            if(sum%3==0)
            printf("%d Is Divisible by 3",num);
            else
            printf("%d Is Divisible by 3",num);
            break;
        }
        case 2:
        {
            int d;
            d=n%10;
            if(d==5||d==0)
            printf("%d Is Divisible by 5",num);
            else
            printf("%d Is not Divisible by 5",num);
            break;
        }
        case 3:
        {
            int d,r;
            d=n%10;
            n/=10;
            r=n-(2*d);
            if(r%7==0)
            {
            printf("%d Is Divisible by 7",num);
            }
            else{
                printf("%d Is not divisible by 7",num);
            }
            break;
        }
        case 4:
        {
            int d,sum;
            sum=0;
            while(n>0){
            d=n%10;
            sum+=d;
            n/=10;
            }
            if(sum%9==0)
            printf("%d Is Divisible by 9",num);
            else
            printf("%d Is Divisible by 9",num);
            break;
        }
        case 5:
        {
            int even_sum,odd_sum;
            for(int i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    even_sum+=n;
                    
                }
                else
                {
                    odd_sum+=n;  
                }
                n/=10;
            }
            int r=odd_sum-even_sum;
            if(r%11==0)
            printf("%d is divisible by 11",num);
            else
            printf("%d is not divisible by 11",num);
            break;
        }
        default:
        {
        printf("Invalid Choice");
        }
    }
}