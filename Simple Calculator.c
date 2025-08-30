#include <stdio.h>
int main(){
  int a,b,ch;
  printf("Enter two values:\n ");
  scanf("%d %d\n",&a,&b);
  printf("%d %d\n",a,b);
  printf("MENU\n");
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  printf("Enter your choice\n"); 
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    {
     printf("Sum= %d",a+b);
     break;
    }
    case 2:
    {
      printf("Difference= %d ",a-b);
      break;
    }
    case 3: 
    {
      printf("Product= %d ",a*b);
      break;
    }
    case 4:
    {
      printf("Quotient= %d ",a/b);
      break;
    }
    default:
    printf("Input Invalid");
  }
}