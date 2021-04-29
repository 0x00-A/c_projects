#include <stdio.h>
int	main()
{
	int N;
	printf("Enter num of elements :");
	scanf("%d",&N);
	int A[N];
	printf("\nEnter %d elements\n",N);

	for(int i=0; i<N; i++){
		printf("element %d:",i);
		scanf("%d",&A[i]);
	}
//------------------------------------------------------
	int MARK[N];
	for(int i=0 ; i<N ; i++){
		MARK[i]=0;
	}
//---------------mark non dup--------------------------
	int mm=1;
	for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N ; j++)
			if(A[i]==A[j]){
				MARK[i]=mm;
				mm++;
			}
		mm=1;

	}
//-----------------print uniqe num---------------------
	int count = 0;
	for(int i=0 ; i<N ; i++){
		if(MARK[i]==1){count++;}
	}
		printf("Found (%d) unique numbers ",count);
	for(int i=0 ; i<N ; i++){
		if(MARK[i]==1){printf("%d ",A[i]);}
	}





	return 0;

}
