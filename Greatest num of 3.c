#include <stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter three values\n");
  scanf("%d %d %d\n",&n1,&n2,&n3);
  printf("%d %d %d\n",n1,n2,n3);
  if(n1>n2 && n1>n3)
  {
    printf("Greatest num of three:%d",n1);
  }
  else if(n2>n1 && n2>n3)
  {
    printf("Greatest num of three:%d",n2);
  }
  else
  {
    printf("Greatest num of three:%d",n3);
  }
  return 0;
}

