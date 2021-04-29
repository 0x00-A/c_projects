#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char *argv[])
{

	int N,M,T;
	printf("enter n of tabels,arrays,ele:");
	scanf("%d%d%d",&T,&N,&M);


	int ***p;

	int i,j,k;


	
	p=(int ***)malloc(sizeof(int **)*T);

	for(i=0;i<T;i++)
	*(p+i)= (int **)malloc(sizeof(int *)*N);

	for(j=0;j<T;j++){
		for(i=0;i<N;i++){

		*(*(p+j)+i)= (int *)malloc(sizeof(int)*M);
		}
	}

	for(k=0;k<T;k++){
	for(i=0;i<N;i++){

		for(j=0;j<M;j++){

			printf("ele [%d][%d][%d] :",k,i,j);
			scanf("%d",&p[k][i][j]);	

		}
		putchar('\n');
	}
	}

	for(k=0;k<T;k++){
	for(i=0;i<N;i++){

		for(j=0;j<M;j++){
			
			
			printf("%3d",p[k][i][j]);
		}

		putchar('\n');
	}
	}

	return 0;
}
