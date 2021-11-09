#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//iterativeGCD: obtain the greatest common denominator of two integers arguments, a and b, using an iterative method
int iterativeGCD(int a, int b) ;

//recursiveGCD: obtain the greatest common denominator of two integer arguments, a and b, using a recursive method
int recursiveGCD(int a, int b);

int main(void) {

   int a,b;

   //Generate a,b randomly from 1 - 12
/* a = (rand() % 11) + 1;
   b = (rand() % 11) + 1;
*/
  
   //Input desired values of a and b
   //exit program without calculating GCD if they are not both positive integere
   int error;
   printf("\nPlease input two positive integers:\n");
   error = scanf("%d, %d",&a, &b);
   if (error != 2) {
	printf("This is less than 1!\n");
	return 1;
   }
   if (a <=0 || b <= 0) {
	printf("These numbers are not positive!\n");
	return 1;
   }

   //call and print results of both functions - iterativeGCD and recursiveGCD
   //using the scanned values for a and b
   printf("Iterative GCD of %d and %d = %d\n", a,b, iterativeGCD(a,b));
   printf("Recursive GCD of %d and %d = %d\n", a,b, recursiveGCD(a,b));
   return 0;
}
   
// iterativeGCD: obtain the greatest common denominator of two integers arguments, a and b, using an iterative method
	// Initialises a local variable - temp to act as a temporary value while reassigning a and b 
	// While loop that sets a = b and b = a modulo b using temp variable.
	// where modulo is the remainder of integer division
	// function terminates and returns a once b == 0 where a is the GCD of a and b
int iterativeGCD(int a, int b) {
   int temp;
   while(b != 0){
	temp=b;
	b = a%b;
	a = temp;
   }
   return a;
}

// recursiveGCD: obtain the greatest common denominator of two integer arguments, a and b, using a recursive method
	//works similarly to the iterative method without using temporary values.
	// uses if/else statements recursively by calling the function in the else statement
	// if b==0 then a is returned
	// otherwise the function is recursively performed on (a, a modulo b) until b==0 is achieved
int recursiveGCD(int a, int b) {
   if (b == 0) {
	return a;
   }
   else {
	return recursiveGCD(b, a%b);
   }
}

