
// function designed to multiply matrices A and B and assign the result to matrix C
// matrices and dimensions have already been defined in the main function
// Void function as nothing is being returned but values of C are being updated
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {  
   //declare loop parameters
   int i, j, k;

   //Matrix Multiplication - as performed in mult_mat.c
   for (i = 0; i < n; i++){
   	for (j = 0; j < q ; j++){
   		for(k = 0; k < p; k++){
   			C[i][j] = C[i][j] + A[i][k]*B[k][j];
		}
   	}
   }

}
