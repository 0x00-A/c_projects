#include<stdio.h>
#include<stdlib.h>

int  main()
{
   #define n 5
   printf("Find if There is a Majority Element or Not");
   printf("\n--------------------------------------\n");

   int i,j;
   int A[n];

   for(i=0;i<n;i++)
   {
	   printf("ele [%d] : ",i);
	   scanf("%d",A+i);
   }

   putchar('\n');
   for(i=0;i<n;i++)
   {
	   printf("%4d",A[i]);
   }

   int ctr;
   for(i=0;i<n;i++)
   {
	   ctr=0;
	   for(j=0;j<n;j++)
	   {
		   if(A[i]==A[j]) ctr++;
	   }
	   if(ctr>(n/2))
	   {
		   printf("\nThere is a majority emement : %d\n",A[i]);
		   break;
	   }
   }
   if(i==n)
	   printf("\nThere is no majority element\n");


	return 0;
}
