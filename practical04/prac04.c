#include <stdio.h>
#include <math.h>

  float degtorad(float arg);
  float traprule(int N);

//float x_deg[12], x_rad[12] , y[12];

  int main(void) {

/* COMMENTED CODE BELOW IS IN RELATION TO PART1 FROM PRACTICAL04 EXERCISES

// Declare Variables
float a = 0.0 , b_deg = 60.0, b_rad;

//Use our function degtorad
b_rad = degtorad(b_deg);
//printf("Deg %f, Rad %f \n", b_deg, b_rad);


int i;
for (i=0; i<13; i++) {
x_deg[i] = i*5;
x_rad[i] = degtorad(x_deg[i]);
y[i] = tan(x_rad[i]);
//printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}

*/

// Input our value for N, taken from scanning.c from practical01
  int error, num1;
  printf("Please input a positive integer N:\n");
  error = scanf("%d",&num1);
   if (num1 <=0) {
     printf("This is not positive!\n");
     return 1;
   }

//Calculating our error and printing the final results
//log(2) is the exact value for tan(x) for x in [0,pi/3]
  float answer, logtwo, diff;
  logtwo = log(2);
  answer = traprule(num1);
  diff = logtwo - answer;

  printf("\n The area under the curve using the Trapezoidal rule using %d points is %.5f", num1,  answer);
  printf("\n The correct area under the curve is %.5f", logtwo);
  if (diff > 0) {
	printf("\n We have underestimated the area by %.5f\n", fabs(diff));
  } else {
	printf("\n We have overestimated the area by %.5f\n", fabs(diff));
  }
return 0;
} 

//SUBFUNCTION degtorad
//degrees to radians function
float degtorad(float arg) {
	return ( (M_PI * arg)/180.0 );
}

//SUBFUNCTION traprule
//function traprule: area of tan(0, pi/3) by trapezoidal rule of N intervals
float traprule(int N) {
  int i;
  float N1;
  N1 = 60/(1.0*N);
  float x_deg[N], x_rad[N] , y[N], area= 0.0;

// Dividing [0,pi/3] into N equal portions and getting the tan of the radian value
  for (i=0; i<=N; i++) {
	x_deg[i] = i*N1;
	x_rad[i] = degtorad(x_deg[i]);
	y[i] = tan(x_rad[i]);
//	printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}


// Getting 2*f(x) for x[1] -> x[n-1] as per the trapeziodal rule formula
  for (i =1; i<=N-1; i++) {
	y[i] = y[i]*2;
//	printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}

//computing the area
  for (i=0; i<=N; i++) {
	area = area + y[i];
}

area = area*((x_rad[N] - x_rad[0])/(2*N));

  return area;
}
