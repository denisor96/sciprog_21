This weeks practical contained two exercises, each requiring its own program.

---------------------------------------------------------------------------------------------------------------------------------------------------------

polynomial.c 

- This program estimates e(1) polynomial functions and checks their accuracy.
- e(1) can be estimated as a polynomial of order p 
- i.e. 1 + x + x^2/2! + x^3/3! + x^4/4! + ... x^p/p! where p! is the factorial of p = 1*2*3*....*(p-1)*p where x=1. 
- This function requires one input from the user, an interger n. n is the highest order polynomial that will be calculcuated

- There are two subfunctions in the program - factorial() and compute_polynomial()
- factorial takes one integer agrument, n, and returns the factorial of n i.e. n!.
- compute_polynomial() takes two integer inputs n and x and computes the estimate for the polynomial of order n.
- x = 1 as specified above. 
- This function works by creating a loop over i from 0 to n and summing their signgular polynomial values 
- i.e. i0 = x^0/0!  = 1, i1 = x^1/1! = 1, i2 = x^2/2! = 2.5 etc. where factorial is called to calculate _!
- The function then returns this total sum.

- In the main function the user inputs the specified n
- Memory is then dynamically allocated using this value of n to create an array to store n+1 doubles which will store estimates of e
- n+1 is chosen as the first polynomial is of degree 0.
- The function the creates a loop over i from 0 to n.
- compute_polynomial is called to calculate the estimate of e(1) with a polynomial of order i
- This value is stored in the ith cell of array and is printed.
- Once the loop has been completed, an identical loop runs, calculating and printing the difference from the true value of e(1) using the maths library
- The memory of the array is then freed and the function is terminated.

---------------------------------------------------------------------------------------------------------------------------------------------------------

mem_alloc.c

- This function uses dynamic memory allocation and pointers to create, fill, print and free allocated memory of an array automatically after specifying it's size.
- This function only requires one input from the user, a positive integer n, which species the size of the array

- This program contains four subfunctions - allocatearray(), fillwithones(), printarray(), freearray()
- allocatearray()  dynamically allocates an array of size of the argument with integer elements and returns a pointer to the array
- fillwithones() takes a pointer to an array and fills every cell of the array with the number 1
- printarray() prints the elements on an array where the argument points to said array
- freearray() free allocated memory of the array when the argument points to

- In the main function, n is inputted by the user and an interger pointer variable is declared
- This pointer is assigned the output of the allocatearray() function meaning it now points to the generated array.
- This pointer is then passed as an argument to the remaining three functions alongside the input - n.
- Once freearrary() has been executed the pointer is set to NULL to free it's memory and the function is terminated.

---------------------------------------------------------------------------------------------------------------------------------------------------------
