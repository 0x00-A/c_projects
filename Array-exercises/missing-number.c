#include <stdio.h>
 
int pickMissNumber(int *arr1, int ar_size) 
{
    int i, sum = 0; 
    for(i = 0; i < ar_size; i++)
	{
        sum = sum + arr1[i];
    }
   
    return ((ar_size+1)*(ar_size+2))/2 - sum;
}
 
int main()
{
    int i;
    int arr1[] = {1, 3, 4, 6, 5, 7};
 
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    printf("The given array is :  ");

	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");
 
 printf("The missing number is : %d \n", pickMissNumber(arr1, ctr));
 return 0;
}
