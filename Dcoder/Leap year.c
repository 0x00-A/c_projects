// Use of Comma

#include <stdio.h> 
#include <conio.h>

int  main() 
{
  int year;
  scanf("%d",&year);
  if((year%4)!=0){
    printf("%d is not leap year\n",year);
  } 
  if((year%4)==0 && (year%100)!=0){
    printf("%d is a leap year\n",year);
  }
  else if((year%4)==0 && (year%100)==0){
    if((year%400)==0)
    printf("%d is a leap year\n",year);
    else if((year%400)!=0)
    printf("%d is not leap year\n",year);
  }
  
  

  getch();
   return 0;
}
