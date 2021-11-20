#include <stdio.h>
#include <stdlib.h>
// Include header file, usues "_" instead of <_>
#include "magic_square.h"


int main() {

   // Input size of square
   int n;
   printf("Enter the size of the square:\n");
   scanf("%d", &n);
   
   // Allocate a matrix
   // This is effectectively an array of pointers where each pointer is a row
   // Therfore the matrix must be a pointer to a pointer (**)
   int ** MagicSquare = malloc( n* sizeof(int));
   
   // For ith element (row), we need to dynamically allocate another array of size n
   int i;
   for (i = 0; i < n ; i++ ) {
	MagicSquare [i] = malloc(n * sizeof(int));
   }
   
   // Using double loop, user manually populates the matrix
   // First loop first loop controls what row is being populated
   // Second loop scans each entry for that row 
   int j;
   for (i = 0; i <n ; i++) {
	printf(" Enter the elements in row # %d, separated by blanks and/or linebreaks: \n", i+1);
	for (j = 0; j < n ; j++) {
		scanf("%d", &MagicSquare[i][j]);
	}
   }

   // Determine whether square is magic or no using header file
   // Uses ? operator to control printed output
   printf("The square %s magic.\n", isMagicSquare(MagicSquare, n) ? "is" : "is not");

   // Each row of matrix needs to be deallocated separately
   // Original pointer to the rows must be deallocated afterwards
   for (i = 0; i <n ; i++){
	free(MagicSquare[i]);
   }
   free(MagicSquare);
   
   //Terminate function
   return 0;

}




































