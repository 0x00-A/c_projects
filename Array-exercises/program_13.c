#include<stdio.h>
#include<stdlib.h>
int	main()
{

	int S;
	printf("S = ");
	scanf("%d",&S);

	int A[S+1];
	for(int i=0;i<S;i++){
	
		printf("Element %d:",i);
		scanf("%d",&A[i]);
	}

	int N,p,temp;
	printf("Value to be added:");
	scanf("%d",&N);

	for(int i=0;i<S;i++){

		if(N<=A[i]){

			p=i;
			break;
		}
	}

	for(int i=S;i>p;i--){

		temp=A[i];
		A[i]=A[i-1];
		A[i-1]=temp;
	}

	A[p]=N;

	for(int i=0;i<S+1;i++){
	
		printf("%d  ",A[i]);
	}


	return (0);
}
