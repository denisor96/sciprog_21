#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

// getlines() - count number of lines in inputted file
int getlines(char filename[MAX_FILE_NAME]);

int main() {

   //  declare and input file using file name and scanf()
   FILE *f; 
   char filename[MAX_FILE_NAME]; 
   printf("Enter file name: "); 
   scanf("%s", filename); 

   // open file,  'r' as only reading its data
   f = fopen(filename, "r");
    
   // use getlines() to get n, the number of lines in file which is also dimensions of the square
   int n;
   n = getlines(filename);

   // allocate a matrix
   // This is effectectively an array of pointers where each pointer is a row
   // Therfore the matrix must be a pointer to a pointer (**)
   int i;
   int ** MagicSquare = malloc( n* sizeof(int*));
   for (i = 0; i < n ; i++ ) {
	MagicSquare [i] = malloc(n * sizeof(int));
   }
   
   // Using double loop, matrix is poulated from input file
   // First loop first loop controls what row is being populated
   // Second loop scans each entry for that row
   // Using fscanf , each element of matrix is read from file f
   int j;
   for (i = 0; i <n ; i++) {
	for (j = 0; j < n ; j++) {
		fscanf(f, "%d", &MagicSquare[i][j]);
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
 
   // clse file
   fclose(f); 

   return 0;

}

// getlines() - count number of lines in inputted file
int getlines( char filename[MAX_FILE_NAME] ) {
   
   // declare (pointer) and open file to read 
   FILE *fp;
   fp = fopen(filename, "r");
   
   // chread - read each character and space in input file
   int ch_read;

   // count - count number of lines in the file   
   int count = 0;

   // while loop to get characters in line in file (EOF = end of file)
   while ((ch_read = fgetc(fp)) != EOF)
   {
	// if linebreak - count increases 
	if (ch_read == '\n') {
		count ++;
	}
   }
   
   // Print number of lines and close the file
   printf("No. of lines = %d\n", count);
   fclose(fp);
   
   // Return count
   return count;
}


