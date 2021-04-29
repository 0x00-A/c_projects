#include <stdio.h>
#include <conio.h>

int main()
{
  int x=1, y=1, z=1;
  
  x += y += z;
  
  printf("x=%d y=%d z=%d\n",x,y,z);
  printf("%d\n",x<y?y:x);
  printf("%d\n",x<y?x++:y++);
  printf("x=%d y=%d\n",x,y);
  printf("%d\n",z+=x<y?x++:y++);
  printf("x=%d y=%d z=%d\n",x,y,z);
  printf("%d\n",z>=y>=x?1:0);
  printf("%d",z>=y&&y>=x);
  
  
  return 0;
}