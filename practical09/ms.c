#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"


int main() {

   int n;
   printf("Enter the size of the square:\n");
   scanf("%d", &n);
   

   // allocate a matrix
   int i;
   int ** MagicSquare = malloc( n* sizeof(int));
   
   for (i = 0; i < n ; i++ ) {
	MagicSquare [i] = malloc(n * sizeof(int));
   }
   
   int j;
   for (i = 0; i <n ; i++) {
	printf(" Enter the elements in row # %d, separated by blanks and/or linebreaks: \n", i+1);
	for (j = 0; j < n ; j++) {
		scanf("%d", &MagicSquare[i][j]);
	}

   }

   printf("The square %s magic.\n", isMagicSquare(MagicSquare, n) ? "is" : "is not");

   for (i = 0; i <n ; i++){
	free(MagicSquare[i]);
   }
   free(MagicSquare);
   return 0;

}




































