#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// factorial(): return the factorial of the arguement n. 
// The factorial of a value is 1*2*3*....*(n-1)*n
int factorial (int n); 

// compute_polynomial(): estimate e (the base of the natural logarithm) using polynomial function to the power of n
// e can be estimated as 1 + x + x^2/2! + x^3/3! + x^4/4! + ... x^n/n! i.e.  a polynomial to the degree n
double compute_polynomial(int n, int x);

//main function
int main() {
   
   // declaring variables
   int order_of_polynomial;
   int size_of_array;
   double* array_of_terms;
   int i, x=1;
   
   // input n i.e. the highest order of polynomial being used to estimate e
   // set size of array = n+1 as first estimate will be 1 i.e. n=0
   // dynamically allocate an array of size n + 1 to store doubles (estimates of e)
   printf("Enter the order of polynomial: ");
   scanf("%d", &order_of_polynomial);  
   size_of_array = order_of_polynomial + 1;
   array_of_terms = (double *) malloc(size_of_array * sizeof(double));
 
   // for loop from i=0 to n+1
   // calculates the estimate for e of a polynomial of order i
   // Stores this value to the array and prints estimate
   for(i = 0 ; i < size_of_array; i++) {
	array_of_terms[i] = compute_polynomial(i, x);
	printf("f[%d] = %0.20lf\n", i, array_of_terms[i]);
   }
 
   // using identical loop as above, 
   // prints difference for each order of polynomial from true e -  e(1)
   for(i = 0 ; i < size_of_array; i++) {
        printf("Estimate difference for term %d is %0.20lf\n", i, exp(1) - array_of_terms[i]);
   }

   //Print true value for e using built-in math library for refernece
   printf("e1 = %0.20f\n", exp(1));
   
   //deallocate and free up memory of the array
   free(array_of_terms);
   array_of_terms = NULL;  

   return 0;
}

// factorial(): return the factorial of the arguement n i.e.  1*2*3*....*(n-1)*n
// When the input is 0, the function returns 1 (0! = 1 as a rule)
// When input is >0 a loop from i=1 to n is used a variable fact is used
// For each iteration fact is multiplied by i and added to its previous value 
// thus giving the factorial of n
int factorial (int n) {
   int i;
   int fact = 1;
   if (n==0) {
        return 1;
   } 
   else {
	for (i = 1; i <= n ; i++){
		fact = fact*i;
		}
	return fact;
	}
}

// compute_polynomial():  estimate e (the base of the natural logarithm) using polynomial function to the power of n
// e can be estimated as 1 + x + x^2/2! + x^3/3! + x^4/4! + ... x^n/n! i.e.  a polynomial to the degree n
// uses for loop for i=0 to n and a double precision variable, sum initiall set to 0.0
// for each iteration x^i/i! is added to the previous value of sum and returns sum once the loop is complete
// It calculates the factorial by calling factorial(), defined above
double compute_polynomial(int n, int x){
   double sum = 0.0;
   int i;
   for(i=0; i <= n; i++)
        sum = sum + (double)pow(x,i)/factorial(i);
   return sum;
}
