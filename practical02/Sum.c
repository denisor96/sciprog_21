#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum - sum1 */
// calculate the sum of 1/1, 1/2, 1/3 ... until 1/1000   
  sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 = sum1 + (1.0/i);
   }

// Second sum - sum2
// calculate the sum of 1/1000, 1/999, 1/988 ... until 1/1  
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 = sum2 + (1.0/i);
   }

//print both sums on separate lines
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

//calculate and print difference between sum1 and sum2
   diff = sum1 - sum2;
   printf(" Difference between the two is %f\n",diff);

return 0;
}
