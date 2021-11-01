#include <stdio.h>

int main(){

  int n = 5;
  int  p=3; 
  int q=4;
  double A[n][p], B[p][q], C[n][q]  ;
  int i, j, k;

  //Initialise A, B and C matrices
  //A
  for (i=0; i<n; ++i){
    for (j=0; j<p; ++j) {
      A[i][j]= i + j;	
    }  
  }
  //B
  for (i=0 ; i<p ; i++){
        for( j=0 ; j < q ; j++) {
                B[i][j] = i-j;
        }
  }
  //C
  for (i=0 ; i<n ; i++){
        for( j=0 ; j < q ; j++) {
                C[i][j] = 0.0;
        }
  }


  
  //Matrix Multiplication
  matmult(n,p,q,A, B, C);

/*  for (i=0 ; i<n ; i++)
        for( j=0 ; j < q ; j++)
                for ( k=0 ; k < p ; j++)
		C[i][j] = C[i][j] + A[i][k] + B[k][j];
 */ 


  //print the matrices
  printf("\n The matrix A is:\n");
  for (i=0 ; i<n ; i++){
    for( j=0 ; j < p ; j++) {
      printf(" %3.0f ", A[i][j]);
  } 
  printf("\n");
  }
 
  printf("\n The matrix B is:\n");
  for (i=0 ; i<p ; i++){
        for( j=0 ; j < q ; j++) {
                printf(" %3.0f ", B[i][j]);
        }
  printf("\n");
  }
  
  printf("\n The matrix C is:\n");
  for (i=0 ; i<n ; i++){
        for( j=0 ; j < q ; j++) {
                printf(" %3.0f ", C[i][j]);
        }
  printf("\n");
  }





 return 0;
} 
