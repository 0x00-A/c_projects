#include<stdio.h>
int	main()
{

	int	A[6]={1,7,3,4,4,5};
	int k,j;
	k=j=0;

	for(int i=0;i<6;i++){
		if(A[i]%2==0) j++;
		else k++;
	}
	
	int l=0,m=0;
	int	EVEN[j],ODD[k];
	for(int i=0;i<6;i++){
		if(A[i]%2==0){
			EVEN[l]=A[i];
			l++;
		}
		else{
			ODD[m]=A[i];
			m++;
		}
	}
	if(j!=0){
	printf("EVEN NUM :");
		for(int i=0;i<j;i++)
			printf("%d ",EVEN[i]);

	}
	printf("\n");
	if(k!=0){
	printf("ODD NUM :");
		for(int i=0;i<k;i++)
			printf("%d ",ODD[i]);

	}
	printf("\n");

	return 0;
}
