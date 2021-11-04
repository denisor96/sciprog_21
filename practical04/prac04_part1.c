#include <stdio.h>
#include <math.h>

// function to convert degrees to radiansdegtorad(float arg);
double degtorad(double arg);

// Global variables
float x_deg[12], x_rad[12] , y[12];

int main(void) {

// Declare Variables
   float a = 0.0 , b_deg = 60.0, b_rad;
// Use our function degtorad
   b_rad = degtorad(b_deg);
//creating and printing an array of tan(x)

   int i;
   printf("\nWhere x in is radians");
   for (i=0; i<13; i++) {
	x_deg[i] = i*5;
	x_rad[i] = degtorad(x_deg[i]);
	y[i] = tan(x_rad[i]);
	printf("\nTan(%f) = %f",x_rad[i], y[i] );
   }
   printf("\n");
return 0;
}


// degtorad : converts degrees to radians of arg
   double degtorad(double arg) {
	return ( (M_PI * arg)/180.0 );
   }








