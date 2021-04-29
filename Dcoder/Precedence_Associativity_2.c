#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int x=1, y=1, z=1;
  
  printf("%d\n",++x||++y&&++z);
              //++x||(++y&&++z)
              //L===>R
              //++x = 2 = True
              //then directly the output is 1 without evaluating the second operation
  printf("x=%d y=%d z=%d\n",x,y,z);
  
  
  
  
  
  
  
  return 0;
}