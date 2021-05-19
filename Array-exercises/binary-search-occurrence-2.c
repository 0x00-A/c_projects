#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int	binary_search(int A[],int size,int n,bool flag)
{
	int start = 0, end = (size-1),resault=-1;
	while(start<=end)
	{
		int mid = (end+start)/2;
		if(n == A[mid])
		{
			resault=mid;
			if(flag) end = mid-1;
			else start = mid+1;
		}
		else if(n<A[mid]) end = mid-1;
		else start = mid+1;
	}
	return resault;
}
int main()
{
	int size = 11,n;
	printf("Enter number to search :");
	scanf("%d",&n);
	int A[]={1,2,3,4,5,5,5,5,5,5,6};
	int first_index = binary_search(A,size,n,true);

	if(first_index == -1) printf("Number does not exist\n");
	else
	{
		int last_index = binary_search(A,size,n,false);
		printf("Number %d occured %d times\n",n,last_index-first_index+1);
	}

 	return 0;
}
