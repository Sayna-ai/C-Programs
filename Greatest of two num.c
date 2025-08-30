#include <stdio.h>

int main()
{
  int n1,n2;
  printf("Enter a number:\n");
    scanf("%d %d",&n1,&n2);
    printf("%d %d\n",n1,n2);
    if(n1>n2)
    {
      printf("Greatest of two is:%d",n1);
    }
    else
    {
      printf("Greatest of two is:%d",n2);
    }
}