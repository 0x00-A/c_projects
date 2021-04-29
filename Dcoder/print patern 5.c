#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  
  int i,j,k;
  #define UPPER 20
  for(j=UPPER;j>=1;j--)
  {
    for(i=UPPER;i>=0;i--)
    {
      if(i+j<=UPPER)
      printf("#");
      else
      printf("*");
      
    }
    for(i=1;i<=UPPER;i++)
    {
      if(i+j<=UPPER)
      printf("#");
      else
      printf("*");
      
    }
    printf("\n");
  }
  
  for(j=1;j<=UPPER;j++)
  {
    for(i=UPPER;i>=0;i--)
    {
      if(i+j<=UPPER)
      printf("#");
      else
      printf("*");
      
    }
    for(i=1;i<=UPPER;i++)
    {
      if(i+j<=UPPER)
      printf("#");
      else
      printf("*");
      
    }
    printf("\n");
  }
  
  
  return 0;
}