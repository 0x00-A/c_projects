#include<stdio.h>

int ark(int m,int n)
{
  int ans;
  if (m==0)  ans=n+1;
  else if (n==0)  ans=ark(m-1,1);
  else ans=ark(m-1,ark(m,n-1));
  return ans;
  
}

int main()
{
  int i,j;
  for(i=0;i<6;i++)
  for(j=0;j<6;j++)
  printf("ark(%d,%d) is %d\n",i,j,ark(i,j));
  
  return 0;
}