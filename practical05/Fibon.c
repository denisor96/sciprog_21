#include <stdio.h>
#include <math.h>

//fibo: perform main operation of a Fibonacci Sequence 
// two inputs (*a, *b) - converts *a = *b and *b = *a + *b  (orginal values)
void fibo(int *a, int *b);

int main() {

//Inputting the value for N ~ number of values on Fibonnacci Sequence to be printed
//Exit function if <1
  int N;
  printf("\nPlease input a positive integer N:\n");
  scanf("%d",&N);
   if (N <1) {
     printf("This is less than 1!\n");
     return 1;
   }

// Declaring initial input values for Fibonnacci function - always 0,1 
  int N1 = 0;
  int N2 = 1;

// Print info. for context and initial value as will be altered once loop begins
  printf("\nThe number you have entered is %d\n", N);
  printf("The Fibonacci Sequence for %d is: \n", N); 
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

//fibo: perform main operation of a Fibonacci Sequence
// two inputs (*a, *b) - converts *a = *b and *b = *a + *b  (orginal values)
void fibo(int *a, int *b) {
	int next;
	next = *a + *b;
	*a = *b;
	*b = next;
}
