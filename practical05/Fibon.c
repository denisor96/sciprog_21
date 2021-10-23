#include <stdio.h>
#include <math.h>

// Declaring the fibonacci function
void fibo(int *a, int *b);

//main function
int main() {

//Inputting the value for N ~ number of values on Fibonnacci Sequence I want printed 
  int N;
  printf("\nPlease input a positive integer N:\n");
  scanf("%d",&N);
// Testing input is >1
   if (N <1) {
     printf("This is less than 1!\n");
     return 1;
   }
// Declaring initial input values for Fibonnacci function  
  int N1 = 0;
  int N2 = 1;

// Print info for context
  printf("\nThe number you have entered is %d\n", N);
  printf("The Fibonacci Sequence for %d is: \n", N);
// Print initial value of sequence i.e. 0 
 printf("%d \n", N1);
// For Loop to run and print fibonacci function up to (n-1)th value  
  int i ;
  for (i=1; i < N-1 ; i++) {
	fibo(&N1, &N2);
	printf("%d \n", N1) ;

  }
// Run and print fibonnacci function for Nth and final time 
  fibo(&N1, &N2);
  printf("%d \n", N1);
   
 return 0;
}

// Fibonacci function which takes two inputs *a, *b
// sums *a and *b
// assigns *a the value of b
// assigns *b the value of the sum
void fibo(int *a, int *b) {
	int next;
	next = *a + *b;
	*a = *b;
	*b = next;
}
