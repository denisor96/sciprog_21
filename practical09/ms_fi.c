#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"


int getlines(char filename[MAX_FILE_NAME]);

int main() {

/*
   int n;
   printf("Enter the size of the square:\n");
   scanf("%d", &n);
   
*/

   FILE *f; //
   char filename[MAX_FILE_NAME]; //
   printf("Enter file name: "); //
   scanf("%s", filename); //
  
   f = fopen(filename, "r");
    
   int n = getlines(filename); //

   // allocate a matrix
   int i;
   int ** MagicSquare = malloc( n* sizeof(int*));
   
   for (i = 0; i < n ; i++ ) {
	MagicSquare [i] = malloc(n * sizeof(int));
   }
   
   int j;
   for (i = 0; i <n ; i++) {
	for (j = 0; j < n ; j++) {
		fscanf(f, "%d", &MagicSquare[i][j]);
	}
   }

   printf("The square %s magic.\n", isMagicSquare(MagicSquare, n) ? "is" : "is not");

   for (i = 0; i <n ; i++){
	free(MagicSquare[i]);
   }
   free(MagicSquare);
 
   fclose(f);   //

   return 0;

}


int getline(char filename[MAX_FILE_NAME]){
    
   FILE *fp;
   fp = fopen(filename, "r");
   
   int ch_read;
   int count = 0;
   // get characters in line in file (EOF = end of file)
   while ((ch_read = fgetc(fp)) != EOF)
   {
	if (ch_read == '\n') {
		count ++;
	}
   }
   printf("No. of lines = %d\n", count);
   fclose(fp);
   return count;
}

































