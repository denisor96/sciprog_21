#include <stdio.h>
#include <stdlib.h>

// hanoi(): performs tower of hanoi puzzle for n disks using recursion and prints steps
void hanoi(int n, int source, int dest, int mid){
   // if only one disk (n = 1) move to final destination 
   if (n == 1) {
	printf("Moved disk %d from %d to %d\n",n, source, dest);
   }
   // otherwise move n-1 disks from rod 1 to rod 2 using rod 3 as an intermediate step
   // move disk n to rod 3
   // move n-1 disks from rod 2 to rod 3 using rod 1 as an intermediary
   else {
	hanoi(n-1, source, mid, dest);
	printf("Moved disk %d from %d to %d\n", n, source, dest);
	hanoi(n-1, mid, dest, source);  
  }
}   

// main function   
void main() {

   // input number of disks - h
   int h;
   printf("Enter number of disks: \n");
   scanf("%d", &h);
   //
   printf(" Tower of Hanoi solution for %d disks:\n", h);
   hanoi(h, 1, 3, 2);
}








