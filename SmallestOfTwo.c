#include <stdio.h>

int main()
{
  int n1,n2;
  printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("%d %d\n",n1,n2);
    if(n1<n2)
    {
      printf("Smallest of two is:%d",n1);
    }
    else
    {
      printf("Smallest of two is:%d",n2);
    }
}