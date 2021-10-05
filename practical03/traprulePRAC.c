#include <stdio.h>
#include <math.h>

int main(void) {


//Declare two floats and assign values
  float a = 0.0 , b_deg  = 60.0;

//Convert pi/3 to radians
  float b_rad;
  b_rad = (M_PI * b_deg)/180.0;
  printf("pi/3 in radians is %.5f \n", b_rad); 

// f(x0) + f(xn)
  float area = tan(a) + tan(b_rad);
  printf("Initial sum = %f\n", area);

// 2*f(x1) + 2*f(x2) + ... + 2*f(xN-1)
  int i;
  for(i=5; i<=55; i=i+5) {
	area = area + 2*tan((M_PI*i)/180);
	printf("New area at x%d = %f\n", i/5, area);
  }

//Multiply with b-a/2N
  int N = 12;
  float mult_rad=(M_PI*((b_deg - a)/(2*N))/180);
  area = mult_rad*area;

//Approximated Value
  printf("\nTrapezoidal result = %f\n", area);

return 0;
}
