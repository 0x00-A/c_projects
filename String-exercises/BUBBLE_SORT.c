#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main()
{
	#define size 5
	char *A[size];

	int i,j;
	char *temp=malloc(sizeof *temp * 100);

	for(i=0;i<size;i++){
		gets(temp);
		int l = strlen(temp);
		A[i]=malloc(sizeof *A * (l+1));
		strcpy(A[i],temp);
		free(temp);
	}

	for(i=0;i<size;i++){

		for(j=0;j<size-1;j++){
		
			int t=strcmp(A[j],A[j+1]);
			if(t>0){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;

			}
		}
	}
	putchar('\n');

	for(i=0;i<size;i++){

		printf("%s\n",A[i]);
	}





	return 0;
}
