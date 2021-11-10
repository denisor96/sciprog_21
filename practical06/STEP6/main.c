#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//main function - no subfunctions to declare
int main(){
   
   // initialise dimensions of matrices
   int n=5;
   int p=3;                
   int q=4;
                  
   // initial matrices for exercise
    double A[n][p], B[p][q], C[n][q];
          
   //initialise loop parameters
   int i, j, k;

   // Initialise A, B and C matrices using loops over the dimensions
   // A - element [i,j] = i+j where i is row index and j is column index
   for (i=0; i<n; i++) {
   	for (j=0; j<p; j++) {
        	A[i][j]=  i + j ;	
        	}  
   }

   // B - element [i,j] = i-j where i is row index and j is column index
   for (i=0; i<p ; i++){
   	for( j=0 ; j < q ; j++) {
   		B[i][j] = i - j;
   	}
   }

   // C - element [i,j] = 0.0 (will be assigned multiplied value in next step)
   for (i=0 ; i<n ; i++){
   	for( j=0 ; j < q ; j++) {
   		C[i][j] = 0.0;
   	}
   }

   // Matrix Multiplication
   // Using matmult() fucntion defined in the  mm.c file in practical06
   matmult(n,p,q,A, B, C);

   // print the matrices - using for loops over the dimensions    
   // linespaces printed after each row to print as matrix and not line of values
   // A
   printf("\n The matrix A is:\n");
   for (i=0 ; i<n ; i++){
   	for( j=0 ; j < p ; j++) {
   		printf(" %3.0f ", A[i][j]);
   	} 
   	printf("\n");
   }                	   		   	   	    
   // B
   printf("\n The matrix B is:\n");
   for (i=0 ; i<p ; i++){
   	for( j=0 ; j < q ; j++) {
   		printf(" %3.0f ", B[i][j]);
	}
   	printf("\n");
   }

   // C
   printf("\n The matrix C is:\n");
   for (i=0 ; i<n ; i++){
   	for( j=0 ; j < q ; j++) {
   		printf(" %3.0f ", C[i][j]);
   	}
   	printf("\n");
   }                	   		   	   	                	   		   	   	               	   		   	   	   // terminate function
   return 0;           
} 

 













