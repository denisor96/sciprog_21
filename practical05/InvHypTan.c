#include <stdio.h>
#include <math.h>


// arctanh1: calculate hyperbolic arc tangent using MacLaurin Series
double arctanh1(const double x, const double delta);
// arctanh2: calculate hyperbolic arc tangent using natural logarithims
double arctanh2( const double x);


int main() {

   // input delta - a positive real number which will be used as the percision for the McLaurin Series
   double delta;
   printf("Enter precision for the Maclaurin Series:\n");
   scanf("%lf", &delta);
   
   //define begining and end points for the functions as specified
   double begin, end;
   begin = -0.9;
   end = 0.9;

   // define size of the arrays for where the tan values are calculated and stored during the loop
   // size 180 as (0.9 + 0.9) / 0.01
   double tan1[180], tan2[180];
   double diff[180];

   // initialize variables to use for difference and accuracy of methods
   double sum_diff = 0.0, tan2_total = 0.0;

   //main component of loop, is double as begining and end values of x, delta are not int's
   double i;
   //index in array
   int j = 0;
   // forloop: stores tan value in array (both methods) and difference. prints difference for each iteration
   for ( i = begin; i <= end + 0.01;  i += 0.01) {
     tan1[j] = arctanh1(i, delta);
     tan2[j] = arctanh2(i);
     tan2_total = tan2_total + fabs(tan2[j]);
     diff[j] = fabs(tan1[j] - tan2[j]);
     sum_diff = sum_diff + diff[j];
     printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i , fabs(tan1[j] - tan2[j]));
     j++;
   }
   // cumulative difference and accuracy of the MacLaurin Series
   printf("The cumulative difference over the entire array is %.10lf.\n", sum_diff);
   printf("The MacLaurin Series for a given precision of %.3lf is %.10lf %% accurate\n\n", delta, (tan2_total - sum_diff)*100/(tan2_total));

   return 0;
}


// arctanh1: calculate hyperbolic arc tangent using MacLaurin Series
double arctanh1(const double x, const double delta){

   // arcTan: value returned at end of function
   // elem: element in series, redefined for each value of n
   // n: integer n to iterate over
   double arcTan = 0;
   double elem;
   int n = 0;

   // calculate element value using formula given and add to arcTan value
   // repeat for n++ until the absolute value of the element is less than the precision  delta
   do {
	double val = 2*n + 1;
	elem = pow(x, val)/val;
	arcTan += elem;
	n++;
   }  while(fabs(elem) >= delta);
   return arcTan;
}

// arctanh2: calculate hyperbolic arc tangent using natural logarithims
double arctanh2(const double x){
   return (log(1 + x) - log(1-x))/2;

}

