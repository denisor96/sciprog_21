#include <stdio.h>
/* The function begins with int main(void) as there are no input parameters*/
int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum - calculate the sum of 1/i for i from 1 to 1000 */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
	sum1 = sum1 + 1.0/i;
   }

/* Second sum - calculate the sum of 1/i for i from 1000 to 1 i.e. reverse of sum1 */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
	sum2 += 1.0/i;  
   }

/* Print the sums of each method with text for reference */
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference between the two methods i.e. sum2 - sum1 */
   diff = sum2 - sum1;

/* Print the difference with text for reference */
   printf(" Difference between the two is %f\n",diff);

}
