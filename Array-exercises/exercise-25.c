#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int i,j,k;
	#define n 2

	int A[n][n];

        printf("\n---------------------------------\n");
	
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			printf("[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	
		putchar('\n');
	int sum;
	for(i=0;i<n;i++){

		sum=0;
		for(j=0;j<n;j++){

			printf("%3d ",A[i][j]);
			sum+=A[i][j];
		}
		printf("  %3d\n",sum);
	}
	putchar('\n');





		putchar('\n');
	for(i=0;i<n;i++){

		sum=0;
		for(j=0;j<n;j++){

			sum+=A[j][i];
		}
		printf("%3d ",sum);
	}
		putchar('\n');

	return 0;
}
