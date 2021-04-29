#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,sp;
  #define ROWS 6
  for(j=1;j<=ROWS;j++)
  {
    for(sp=1;sp<=ROWS-j;sp++)
    {
      printf("#");
    }
    for(i=1;i<=j;i++)
    {
      printf("* ");
    }
    printf("\n");
  }
}