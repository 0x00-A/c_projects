#include <stdio.h>
#include <stdlib.h>
int *B;
int merge_sort(int A[],int size)
{
    B = realloc(B, sizeof(int) * size);
    int right_smallest, left_smallest,i,j,k,l;

    if(size==1) *B = *A;
    else
    {
    l=(size/2);
    int left_half[l],right_half[size-l];
    for(i=0;i<l;i++)
    {
	    left_half[i]=A[i];
    }
    for(i=l;i<size;i++)
    {
	    right_half[i-l]=A[i];
    }
    merge_sort(left_half,l);
    for(i=0;i<l;i++)
    {
	    left_half[i]=B[i];
    }
    merge_sort(right_half,(size-l));
    for(i=0;i<size-l;i++)
    {
	    right_half[i]=B[i];
    }

    i=j=k=0;
    left_smallest=left_half[i];
    right_smallest=right_half[k];

    while(j<size)
    {
	    if(i<l && k<size-l)
	    {
		    if(left_smallest<right_smallest)
		    {
			    B[j++]=left_smallest;
			    left_smallest=left_half[++i];
		    }
		    else
		    {
			    B[j++]=right_smallest;
			    right_smallest=right_half[++k];
		    }
	    }
	    else if(i>=l)
	    {
		    B[j++]=right_smallest;
		    right_smallest=right_half[++k];
	    }
	    else if(k>=size-l)
	    {
		    B[j++]=left_smallest;
		    left_smallest=left_half[++i];
	    }


    }
    }
    return 0;
}
int main()
{
    int i,size;
    printf("\nEnter N of elements : ");
    scanf("%d",&size);
    
    int A[size];

    for(i=0;i<size;i++)
    {
	    printf("ele[%d] : ",i);
	    scanf("%d",A+i);
    }
    
    merge_sort(A,size);

    for(i=0 ;i<size ;i++)
    {
	   printf("%d  ",B[i]);
    }

    free(B);

	return 0;
}
