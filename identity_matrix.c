#include<stdio.h>
#include<stdlib.h>

int  main()
{
     int i,j,rows,columns;
     int **p;
     printf("enter num of rows and columns : ");
     scanf("%d %d",&rows,&columns);

     p = (int **)calloc(rows,sizeof *p);
     for(i=0;i<rows;i++)
     {
	     p[i] = (int *)calloc(columns,sizeof(int));
     }

     printf("\n-----------------------------------\n");

     for(i=0;i<rows;i++)
     {
	     for(j=0;j<columns;j++)
	     {
		     printf("[%d][%d] : ",i,j);
		     scanf("%d",*(p+i)+j);
	     }
     }
     for(i=0;i<rows;i++)
     {
	     for(j=0;j<columns;j++)
	     {
		     printf("%d ",p[i][j]);
	     }
	     putchar('\n');
     }
     int flag1,flag2;
     flag1 = flag2 = 0;
     for(i=0;i<rows;i++)
     {
	     for(j=0;j<columns;j++)
	     {
		     if(i==j)
		     {
			     if(p[i][j]!=1)
			     {
				     flag1 = 1;
				     break;
			     }
		     }
		     else
		     {
			     if(p[i][j]!=0)
			     {
				     flag2 = 1;
				     break;
			     }
		     }
	     }
     }
     if(flag1==0&&flag2==0)
	     printf("The Matrix is Identity");
     else
	     printf("The Matrix is not Identity");




	return 0;
}
