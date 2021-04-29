#include <stdio.h>
#include <limits.h>
int	poww(int a,int i)
{
	if(i==0) return 1;
	else if(i==1) return a;
	else return a * poww(a,i-1);
	
}
int	main()
{
		
	for(register int N=0;N<=INT_MAX;N++ ){
	int order = 0;
	int q = N;
	while(q!=0){
	
		q = q/10;
		order++;
	}

	q=N;
	int sum = 0;
	while(q!=0){

		sum += poww((q%10),order);
		q=q/10;

	}

	if(N==sum) printf("%d  ",N);
}

	return 0;
}
