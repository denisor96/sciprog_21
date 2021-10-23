#include <stdio.h>
#include <math.h>

float arctanh1(float x);
float arctanh2(float y);


int main(void) {

float delta, error, result;
printf("Please input a positive real number delta:\n");
error = scanf("%f",&delta);
   if (delta <=0) {
     printf("This is not positive!\n");
     return 1;
   }
printf("%f\n", delta);


result = arctanh1(0.9);
printf("\n%f\n", result);

return 0;
}

// arctanh(x) function

float arctanh1(float x) {
  float sum = 0, delta = 1.29; 
  int n = 0;
  while (sum < delta) {
	sum = sum + (pow(x,((2*n)+1)))/((2*n+1));
	n++;
  }
  return sum;
}


//approximate function 





