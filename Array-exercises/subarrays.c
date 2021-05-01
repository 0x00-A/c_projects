#include <stdio.h>
 
 
int main()
{
    printf("Print all subarrays of an array");
    printf("\n----------------------------------------------------\n");
    int i,j,k;

    int n;
    printf("Enter number of elements to be stored in the array : ");
    scanf("%d",&n);
    int arr1[n];

    for(i=0;i<n;i++)
    {
	    printf("Element[%d] : ",i);
	    scanf("%d",arr1+i);
    }
	putchar('\n');
    printf("{");
    for(j=0;j<n;j++)
    {
    	    printf("%d",arr1[j]);
    	    if(j!=n-1) printf(",");
   	    if(j==n-1) printf("}");
    }
	putchar('\n');

    for(i=0;i<n;i++)
    {
	 for(j=i;j<n;j++)
	 {
		 printf("{");
		 for(k=i;k<j+1;k++){
			 printf("%d",arr1[k]);
			 if(k!=j) printf(",");
		 }
		 printf("}");
		 if(i!=n-1) printf(",");
	 }
    }
	putchar('\n');
 
    return 0;
}
