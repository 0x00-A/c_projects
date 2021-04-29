#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,sp;
  #define ROWS 10
  for(j=1;j<=ROWS;j++)
  {
    for(sp=ROWS;sp>=j;sp--)
    {
      printf(" ");
    }
    for(i=1;i<=j*2-1;i++)
    {
      (i%2)==0?printf(" "):printf("*");
      
    }
    printf("\n");
  }
}