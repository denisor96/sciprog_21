#include <stdio.h>
#include <math.h>

int main(void) {
// Declare variables
   int i , N;
   float  a, b, sum, logtwo, diff , x[12], y[12];
  
// Declaring and printing our start/end points 
   a = 0;
   b = M_PI/3;

   printf("We are integrating from %.0f to %.5f\n", a, b);

// Getting the function values i.e. tan(0) & tan(pi/3) for our start and end points
   printf("Tan of %.0f is %.5f\n", a, tan(a));
   printf("Tan of %.5f is %.5f\n", b, tan(b));

// Generate 11 equidistant points between a and b
   for (i=0; i<=12; i++) {
      x[i] = a + i*(b/12);
      y[i] = tan(x[i]);  
      printf("\n x%d and y%d are %.5f and %.5f", i, i ,  x[i], y[i]);
   }

// Get 2* our y value from y[1] to y[11]
   for (i =1; i<=11; i++) {
	y[i] = 2* y[i];
   }

// Sum from i=0 to i=12
   sum = 0.0;
   for (i=0; i<=12; i++) {
	sum = sum + y[i];
   }

// apply the (b-a)/2N factor to the sum to get our estimation via trapezoidal rule
   N= 12;
   sum = sum*((b-a)/(2*N));
   logtwo = log(2);

// Get the correct result i.e. the log of two and its difference from the trapezoidal rule (sum)
   logtwo = log(2);
   diff = logtwo - sum;

// Print final results and compare answers
   printf("\n");
   printf("\n The area under the curve using the Trapezoidal rule is %.5f", sum);
   printf("\n The correct area under the curve is %.5f", logtwo);
   if (diff > 0) {
	printf("\n We have underestimated the are by %.5f\n", fabs(diff));
   } else {
	printf("\n We have overestimated the area by %.5f\n", fabs(diff));
   }
return 0;
} 
