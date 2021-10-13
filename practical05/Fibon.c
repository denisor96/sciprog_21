#include <stdio.h>
#include <math.h>

int fibon(int F[2]);

int main(void) {
  int N, error;
  printf("\nPlease input a positive integer N:\n");
  error = scanf("%d",&N);
   if (N <=0) {
     printf("This is not positive!\n");
     return 1;
   }
  printf("\nThe number you have entered is %d\n", N);
  int i,test[2];
  for (i=0; i<=2; i++) {
	test[i] = F[N,i];
	printf("F%d is %d\n", i, test[i]);
}

 // test = fibon(N, 1);
 // printf("\nF1 = %d and F2 = %d\n", test[0], test[1]); 
 return 0;
}

int fibon(int F[2]) {
	return (F[0] + F[1]), F[1];
}
