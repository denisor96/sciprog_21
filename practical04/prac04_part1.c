#include <stdio.h>
#include <math.h>

// function to convert degrees to radiansdegtorad(float arg);
double degtorad(double arg);

// Global variables
float x_deg[12], x_rad[12] , y[12];

int main(void) {

//creating and printing an array of tan(x)
//x_rad array of radian values using degtorad function and degree values of 0,5,10,..,60
   int i;
   printf("\nWhere x in is radians");
   for (i=0; i<13; i++) {
	x_rad[i] = degtorad(i*5);
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








