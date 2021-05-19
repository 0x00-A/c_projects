//works with duplicates in the array
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int	binary_search(int A[],int size,int n)
{
	int start=0, end=size-1;
	while(start<=end)
	{
		int mid = (end+start)/2;
		if(A[mid] == n)	return mid;
		else
		{
			int r = ((n>A[mid])&&(A[mid]<A[end])&&(n<=A[end]));
			int r2 = ((n>A[mid])&&(A[mid]>A[end])&&(n>=A[end])); 	

			int l = ((n<A[mid])&&(A[mid]<A[end]));
			int l2 = ((n>A[mid])&&(A[mid]<A[end])&&(n>A[end]));

				if(r||r2)
				start=mid+1;
				else if(l||l2)
				end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int size=6,n;
	printf("Enter n : ");
	scanf("%d",&n);
	int A[size];
	for(int i=0;i<size;i++)
	{
		printf("[%i] : ",i);
		scanf("%d",A+i);
	}

	int resault = binary_search(A,size,n);
	if(resault==-1)
		printf("No");
	else
		printf("index of %d is %d\n",n,resault);

 	return 0;
}
