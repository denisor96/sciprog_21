#include<stdio.h>
#include<stdlib.h>


//Four subfunctions: allocatearray(), fillwithones(), printarray(), freearray()

// allocatearray(): dynamically allocates an array of size of the argument with integer elements 
int* allocatearray(int n);

// fillwithones(): takes a pointer to an array and fills every cell of the array with the number 1
void fillwithones(int* array, int n);

// printarray(): prints the elements on an array where the argument points to said array
void printarray(int *array, int n);

// freearray(): free allocated memory of the array when the argument points to
void freearray(int* array);


//main function
int main() {

  //input n - the number of elements in the array
  int n;
  printf("Entre the number of elements in the array: ");
  scanf("%d", &n);
  
  // declare integer pointer
  // set it to point to the generated array using allocate_array() 
  int* array_main; 
  array_main = allocatearray(n);
  
  //call fillwithones to fill every cell of array with 1
  fillwithones(array_main, n);
  
  // print array using printarray()
  printarray(array_main, n);
  
  // free allocated memory of the array
  // set its pointer equal to NULL to free its memory
  freearray(array_main);
  array_main = NULL;

  //terminate function 
  return 0;
}




// allocatearray(): dynamically allocates an array of size of the argument with integer elements
// returns pointer to that  array - 'array'
int* allocatearray(int n) {
  int* array;
  array = (int*) malloc(n * sizeof(int));
  printf("Array of size %d allocated.\n", n);
  return array;
}

// fillwithones(): takes a pointer to an array and fills every cell of the array with the number 1
// uses for loop from i=0 to n and sets ith cell in the array to 1
void fillwithones(int* array, int n){
  int i;
  for (i = 0; i< n; i++) {
        array[i] = 1;
  }
}

// printarray(): prints the elements on an array where the argument points to said array
// uses for loop from i=0 to n and prints ith cell of the array and finishes with a linespace
void printarray(int *array, int n){
  int i;
  for (i = 0; i< n; i++) {
        printf("%d ",array[i]);
  } printf("\n");
}

// freearray(): free allocated memory of the array when the argument points to
// frees allocated memoary associated with the array and  prints message for confirmation
void freearray(int* array) {
  free(array);
  printf("The array has been freed. Have a nice day.\n");

}
