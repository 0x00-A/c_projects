#include<stdio.h>

int	main()
{
	#define n 5
	int i,j;
	int A[n];

	for(i=0;i<n;i++){
		printf("[%d] : ",i+1);
		scanf("%d",A+i);
	}

	int MIN,MAX,min,max;
	MIN=MAX=A[0];
	for(j=0;j<n;j++){

		if(MIN>A[j]){
			MIN=A[j];
			min=j;
		}
		else if(MAX<A[j]){
			MAX=A[j];
			max=j;
		}

	}

	int swap=MIN;
	MIN=MAX;
	MAX=swap;

	for(j=0;j<n;j++){
	
		if(j!=min){
			if(MIN>A[j]){
				MIN=A[j];
			}
		}
	}

	for(j=0;j<n;j++){
	
		if(j!=max){
			if(MAX<A[j]){
				MAX=A[j];
			}
		}
	}

	putchar('\n');

	printf("2ndMIN = %d\n2ndMAX = %d\n",MIN,MAX);




	return 0;
}
