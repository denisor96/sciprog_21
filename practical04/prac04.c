#include <stdio.h>
#include <math.h>

float degtorad(float arg);
float traprule(int N);

int main(void) {

/*
// Declare Variables
float a = 0.0 , b_deg = 60.0, b_rad;

//Use our function degtorad
b_rad = degtorad(b_deg);
//printf("Deg %f, Rad %f \n", b_deg, b_rad);


int i;
float x_deg[12], x_rad[12] , y[12];
for (i=0; i<13; i++) {
x_deg[i] = i*5;
x_rad[i] = degtorad(x_deg[i]);
y[i] = tan(x_rad[i]);
//printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}
*/
int error, num1;
printf("Please input a positive integer N");
error = scanf("%d",&num1);
   if (num1 <=0) {
     printf("This is not positive!\n");
     return 1;
   }

float answer, logtwo;
logtwo = log(2);
answer = traprule(num1);
printf("\nThe answer for N = %d is %.5f.\n The log of two is %.5f\n",num1, answer, logtwo);
return 0;
}


//degrees to radians function
float degtorad(float arg) {
	return ( (M_PI * arg)/180.0 );
}

//function traprule: area of tan(0, pi/3) by trapezoidal rule of N intervals
float traprule(int N) {
  int i, N1;
  N1 = 60/N;
  float x_deg[N], x_rad[N] , y[N], area= 0.0, factor;
  for (i=0; i<=N; i++) {
	x_deg[i] = i*N1;
	x_rad[i] = degtorad(x_deg[i]);
	y[i] = tan(x_rad[i]);
//	printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}

  for (i =1; i<=N-1; i++) {
	y[i] = y[i]*2;
//	printf("\n x_deg%d , x_rad%d and y%d are %.1f, %.5f and %.5f \n", i, i, i, x_deg[i], x_rad[i], y[i]);
}

  for (i=0; i<=N; i++) {
	area = area + y[i];
}

  factor = (x_rad[N] - x_rad[0])/(2*N);
  area = area*factor;
 
  return area;
}


