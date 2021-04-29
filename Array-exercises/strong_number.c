#include <stdio.h>

int	factorial(int i)
{
	if(i==1) return 1;
	else
		return i * factorial(i-1);

}
int	main()
{
	int N;
	scanf("%d",&N);
	int q=N;
	int resault=0,rem=0,sum;

		while(q!=0){
			rem = q%10;
			sum=1;
			for(int i=0;i<rem;i++){

				sum = sum * (rem-i);
			}
			resault += sum;
			q = q/10;
		}
		if(N==resault) 
			printf("\n%d is a strong number ",resault);
	
	return 0;
}
