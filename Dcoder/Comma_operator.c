/*The comma operator is evaluated left to right,
and the value of the expression is the last value
which in this case is (8+1+1)*4 = 40.*/


#include <stdio.h>

int main()
{
  int a = 8, b;
  b = (a++, ++a, a<<2); 
  
  printf("%d",b);
  int c;
  c = b,5;
  printf("%d",c); // assignment is having higher priority 
  return 0;       // than comma so b is assigned to c
}