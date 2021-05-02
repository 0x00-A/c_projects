#include<stdio.h>
#include<stdlib.h>
int  main()
{
/*      0  1  2
 *
 *  0	1 -1  3
 *  1	0  1  0
 *  2	3  2 -1
 *
 * 		    (i+1)%3 (i+2)%3     (i+2)%3 (i+1)%3 
 * i=0  d[0][i] * d[1][1]*d[2][2]  -  d[1][2]*d[2][1]
 * i=1  d[0][i] * d[1][2]*d[2][0]  -  d[1][0]*d[2][2]
 * i=2  d[0][i] * d[1][0]*d[2][1]  -  d[1][1]*d[2][0]
 *		
*/
	int i;
	int d[3][3] = {
		{1,-1,3},
		{0,1,0},
		{3,2,-1}
	};

	int sum=0;
	for(i=0;i<3;i++)
 	   sum += d[0][i] * d[1][(i+1)%3] * d[2][(i+2)%3] - d[1][(i+2)%3] * d[2][(i+1)%3];


	printf("The determinant of 3x3 matrix is : %d\n",sum);


	return 0;
}
