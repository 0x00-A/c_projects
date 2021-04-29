// goto statement forword jump

#include <stdio.h> 
#include <conio.h>
 
int  main() 
{ 
  int a = 10;
  clrscr();

  printf( "\n Nils Patel" );

  if( a == 10 )
  {
    goto  LABEL;
  }

  printf( "\n This simple" );
  printf( "\n Program" );

  LABEL:
  printf( "\n go to statement" );
  printf( "\n Forword jump" );

  getch();
  return 0;
}