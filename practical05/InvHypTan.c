#include <stdio.h>
#include <math.h>


// declare function to calculate hyperbolic arc tangent using MacLaurin Series
double arctanh1(const double x, const double delta);
// function to calculate hyperbolic arc tangent using natural logarithims
double arctanh2( const double x);

// main function
int main() {

// input delta - a positive real number which will be used as the percision for the McLaurin Series
  double delta ;
  printf("Enter precision for the Maclaurin Series:\n");
  scanf("%lf", &delta);
  
// input begin, end - the range over x the hyperbolic arc tangent will be calculated
  double begin, end;
  printf("Enter the start and finish points for x:\n");
  scanf("%lf, %lf", &begin, &end);

// define size of the arrays for where the tan values are calculated and stored during the loop
// create a array of correct shape, fabs() due to possible negative value for x
  double a =  ((fabs(begin) + fabs(end))/delta) + 1.;
// cast as integer to create arrays
  int asize = a;

// declare arrays
  double tan1[asize];
  double tan2[asize];

//main component of loop, is double as begining and end values of x, delta are not int's
  double i;
//index in array
  int j = 0;

// forloop: stores tan value in array (both methods) and prints difference for each iteration
  for ( i = begin; i <= end;  i += delta) {
    tan1[j] = arctanh1(i, delta);
    tan2[j] = arctanh2(i);
    printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i , fabs(tan1[j] - tan2[j]));
    j++;

  }


  return 0;
}

// function to calculate inverser hyperbolic tan using MacLaurin Series
double arctanh1(const double x, const double delta){
// arcTan: value returned at end of function
  double arcTan = 0;
// elem: element in series, redefined for each value of n
  double elem;
// n integer n to iterate over
  int n = 0;
// calculate element value and add to arcTan value
// repeat for n++ until the absolute value of the element is less than the precision  delta
  do {
	double val = 2*n + 1;
	elem = pow(x, val)/val;
	arcTan += elem;
	n++;
  }  while(fabs(elem) >= delta);
  return arcTan;
}

// function to calculate inverser hyperbolic tan using natural logarithims. Formula given below.
double arctanh2( const double x){
  return (log(1 + x) - log(1-x))/2;

}

