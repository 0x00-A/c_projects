// goto statement with backward jump

#include <stdio.h> 
#include <conio.h>
 
int  main() 
{ 
  int i;
  clrscr();

  i = 1;

  Label:
  printf( "  %d", i );
  i++;
  if( i <= 10 )
  {
    goto Label;
  }

  getch();
  return 0;
}
