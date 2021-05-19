#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int	binary_search(int A[],int size)
{
	int start=0, end=size-1;
	while(start<=end)
	{
		int mid = (end+start)/2;
		if(A[mid]<A[mid-1])	return mid;
		else
		{
			if(A[mid]>A[size-1])	start=mid+1;
			else	end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int size;
	printf("Enter size : ");
	scanf("%d",&size);
	int A[size];
	for(int i=0;i<size;i++)
	{
		printf("[%i] : ",i);
		scanf("%d",A+i);
	}

	int resault = binary_search(A,size);
	if(resault==-1)
		printf("No");
	else
		printf("%d\n",resault);

 	return 0;
}
