#include<stdio.h>
int  main(){
  int i,j,k,sum=0;
  int rows_1,columns_1,rows_2,columns_2;
  printf("Enter number of rows for 1st array:");
  scanf("%d",&rows_1);
  printf("enter number of columns for 1st array:");
  scanf("%d",&columns_1);

  int A[rows_1][columns_1];
  for(i=0 ; i<rows_1 ; i++){
    for(j=0 ; j<columns_1 ; j++){
      printf("A[%d][%d]:",i,j);
      scanf("%d",&A[i][j]);
      printf("\n");

    }
  }  
  printf("enter number of rows for 2nd array:");
  scanf("%d",&rows_2);
  printf("enter number of columns for 2nd array:");
  scanf("%d",&columns_2);
  
  int B[rows_2][columns_2];
  for(i=0 ; i<rows_2 ; i++){
    for(j=0 ; j<columns_2 ; j++){
      printf("B[%d][%d]:",i,j);
      scanf("%d",&B[i][j]);
      printf("\n");
    }
  }  
  if(columns_1!=rows_2)
    printf("\nColumns of first array must be equal to rows of second array!!\n");
  else{
  int AB[rows_1][columns_2];
  for(i=0 ; i<rows_1 ; i++){
    for(j=0 ; j<columns_2 ; j++){
      sum=0;
      for(k=0 ; k<rows_2 ; k++){
         sum += A[i][k] * B[k][j];
      }
    AB[i][j] = sum;
    }

  }
  for(i=0 ; i<rows_1 ; i++){
    for(j=0 ; j<columns_2 ; j++){
    
    printf("[%d][%d]=%3d ",i,j,AB[i][j]);
    }  
    printf("\n");
  }
  
  }
  return 0;
}
