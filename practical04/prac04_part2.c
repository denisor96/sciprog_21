#include <stdio.h>
#include <math.h>
//
//function to convert degrees to radiansdegtorad(float arg);
//
double degtorad(double arg);

//
//function to apply trapezoidal rule to tan(x) from 0 to 60 over N number of points 
//
double traprule(int N);

//main function
int main(void) {

// Input our value for N 
   int  N;
   printf("\n\nPlease enter N, the number of points to use for the trapezoidal rule\n");
   scanf("%d",&N);

//Calculating our error and printing the final results
//log(2) is the exact value for tan(x) for x in [0,pi/3]
   double answer, logtwo, diff;
   logtwo = log(2);
   answer = traprule(N);
   diff = logtwo - answer;

//print results
   printf("\nThe area under the curve using the Trapezoidal rule using %d points is %lf", N,  answer);
   printf("\nThe correct area under the curve is %lf", logtwo);
   if (diff > 0) {
	printf("\nIt has underestimated the area by %lf\n", fabs(diff));
   } else {
	printf("\nIt has overestimated the area by %lf\n", fabs(diff));
   }
   return 0;
}

//
// degtorad : converts degrees to radians of arg
//
double degtorad(double arg) {
	return ( (M_PI * arg)/180.0 );
 }

//
// traprule: area of tan(0, pi/3) by trapezoidal rule over N intervals
//
double traprule(int N) {
    int i;
    double N1;
    N1 = 60/(1.0*N);
    double x_deg[N], x_rad[N] , y[N], area= 0.0;

// Dividing [0,pi/3] into N equal portions and getting the tan of the radian value
   for (i=0; i<=N; i++) {
	x_deg[i] = i*N1;
	x_rad[i] = degtorad(x_deg[i]);
	y[i] = tan(x_rad[i]);
   }

// Getting 2*f(x) for x[1] -> x[n-1] as per the trapeziodal rule formula
   for (i =1; i<=N-1; i++) {
	y[i] = y[i]*2;
   }
//computing the area (sum y[i] and multpliy by (b-a)/2N)
   for (i=0; i<=N; i++) {
	area = area + y[i];
   }
   area = area*((x_rad[N] - x_rad[0])/(2*N));
   return area;
}










