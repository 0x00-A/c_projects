#include<stdio.h>
#include<stdlib.h>

#define n 9
int  FinfMajorEle(int A[])
{
	int resaultXor=0;
	int i;
	for(i=0;i<n;i++)
	{
		resaultXor ^= A[i]; 
	}
	return resaultXor;
}
int  main()
{
	int A[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("ele[%d] : ",i+1);
		scanf("%d",A+i);
	}
		putchar('\n');
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
		putchar('\n');
	
	printf("Number occurring number odd of times : %d\n",FinfMajorEle(A));



	return 0;
}
