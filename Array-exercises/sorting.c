#include<stdio.h>

int	main()
{
	int N;
	printf("Enter Number of Elements to be Stored in The Array:");
	scanf("%d",&N);

	int A[N];
	printf("Assign eatch element to it's Value\n");

	for(int j=0;j<N;j++){

		printf("Array[%d]:",j);
		scanf("%d",&A[j]);
		printf("\n");
	}

	for(int j=0;j<N;j++){
		printf("A[%d]||",j);
		
		for(int i=0;i<A[j];i++){
		
			printf("==");
		}
		printf("(%d)",A[j]);
	printf("\n");
	}

	int i,j,k;

	for(i=0;i<N;i++){

		for(j=0;j<N-1;j++){

			if(A[j]<A[j+1]){
				k=A[j+1];
				A[j+1]=A[j];
				A[j]=k;
			}
		}
	}

	printf("______________________________________________________\n\n");
	for(int j=0;j<N;j++){
		printf("A[%d]||",j);
		
		for(int i=0;i<A[j];i++){
		
			printf("==");
		}
		printf("(%d)",A[j]);
	printf("\n");
	}


	return 0;
}
