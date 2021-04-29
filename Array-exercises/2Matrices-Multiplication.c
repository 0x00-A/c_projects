#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int i,j,k;
	#define n 2

	int A[n][n];
	int B[n][n];
	int C[n][n];
	printf("\nMultiplication of two Matrices :\n");
        printf("----------------------------------\n");
	
	printf("FIRST MATRIX\n");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	printf("SECOND MATRIX\n");
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
		putchar('\n');
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("%3d ",A[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');

	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("%3d ",B[i][j]);
		}
		putchar('\n');
	}
		putchar('\n');

	printf("THE MULTIPLICATION OF TWO MATRECES IS\n");

	int sum;
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			sum=0;
			for(k=0;k<n;k++){

				sum+=A[i][k] * B[k][j];
			}

			C[i][j]=sum;
		}
	}

		putchar('\n');
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("%3d ",C[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
