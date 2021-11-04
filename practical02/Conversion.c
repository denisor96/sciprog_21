#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables of different type - int, float, binary */
  int i,inum,tmp,numdigits;
  float fnum;
  char binnum[60];

/* Intialise 4-byte integer */
  inum = 33554431;
/* Convert to 4-byte float */
  fnum = (float) inum;


/* Convert to binary number (string)*/
//creates temporary number tmp with the value of the number in question 
//while loop appends quotient of the number/2 i.e. 0 or 1 to the the binary number
//number is halved after each iteration and function terminates once it is <0   
  i = 0; tmp = inum;
  while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
  }

/* Terminate the string */
// \0 indicates the termination of string in c  
  binnum[i] = '\0';
       

/* Complete the expression */
// number of digits in a number is the base 10 log of that number rounded up   
  numdigits = ceil(log10(fnum));
 

  printf("The number of digits is %d\n",numdigits);
  printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}
