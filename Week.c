#include <stdio.h>
int main()
{
    int n;
    printf("Enter a num <1-7> ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
        printf("Day %d is Monday",n);
        break;
        }
        case 2:
        {
        printf("Day %d is Tuesday",n);
        break;
        }
        case 3:
        {
        printf("Day %d is Wednesday",n);
        break;
       }
        case 4:
        {
        printf("Day %d is Thursday",n);
        break;
        }
        case 5:
        {
        printf("Day %d is Friday",n);
        break;
        }
        case 6:
        {
        printf("Day %d is Saturday",n);
        break;
        }
        case 7:
        {
        printf("Day %d is Sunday",n);
        break;
        }
        default:
        {
        printf("Invalid Input");
        }
    }
}