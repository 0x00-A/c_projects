#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
  unsigned int sec;
  printf("Enter time in seconds\n");
  scanf("%d",&sec);
  
  printf("%ds %dmin %dh %dj %dw %dm %dy",(sec%3600)%60,(sec%3600)/60,(sec/3600)%24,((sec/3600)/24)%7,(((sec/3600)/24)/7)%30,((((sec/3600)/24)/7)/30)%12,((((sec/3600)/24)/7)/30)/12);
  
    

  
  return 0;
}