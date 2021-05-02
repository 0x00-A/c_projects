#include <stdio.h>


int main()
{
    printf("\nSearching an element in a sorted array "
		    "using Binary search");
    printf("\n-------------------------------------\n");
    int start_index,end_index,mid_index,x,n,i;

    printf("\nEnter number of elements : ");
    scanf("%d",&n);
    printf("\nEnter elements in the array in sorted\
		    order\n");
    int arr1[n];
    for(i=0;i<n;i++)
    {
	    printf("Element[%d] : ",i);
	    scanf("%d",arr1+i);
    }
    printf("\nEnter element to search :");
    scanf("%d",&x);

	    start_index = 0;
	    end_index = n-1;
    while(start_index<=end_index)
    {
	    mid_index = (start_index+end_index)/2;

	    if(x == arr1[mid_index])
		    printf("\nindex = %d\n",mid_index);
		    break;
	    else if(x>arr1[mid_index])
		    start_index = mid_index +1;
	    else
		    end_index = mid_index -1;
    }


 
 return 0;
}
