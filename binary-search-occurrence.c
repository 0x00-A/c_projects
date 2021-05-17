#include <stdio.h>
#include <stdlib.h>
static int ctr;
int	binary_search(int A[],int start,int end,int n)
{
	int mid = (end+start)/2;
	if(start>end) return 0;
	else if(A[mid] == n)
	{
		ctr++;
		binary_search(A,start,mid-1,n);
		binary_search(A,mid+1,end,n);
	}
	else if(n<A[mid]) binary_search(A,start,mid-1,n);
	else binary_search(A,mid+1,end,n);

	return 0;
}
int main()
{
	int size = 11,n;
	printf("Enter number to search :");
	scanf("%d",&n);
	int A[]={1,2,3,4,5,5,5,5,5,5,6};
	int start = 0, end = (size-1);
	binary_search(A,start,end,n);
	if(ctr==0) printf("Number %d not found\n",n);
	else printf("Number %d found %d times\n",n,ctr);
 	return 0;
}
