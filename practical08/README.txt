This weeks practical contained one exercises, requiring only one program.

---------------------------------------------------------------------------------------------------------------------------------------------------------

gcd.c
- This program calculates the greatest common divisor (GCD) of two integers, a and b, using two separate methods - iteration and recursion.
- The GCD is the largest positive integer that divides both numbers without a remainder.
- This program requires two inputs from the user, to specify a and b. Both a and b must be in the form of a strictly positive integer (>0).
- a and be should be inputted on one line when specified by the program and spearated by a comma

- There are two subfunctions iterativeGCD() and recursiveGCD()

- iterativeGCD(a, b) takes two integer arguments a and b. 
- It calcultates the GCD of a and b using repeated iteration and a temporary value.
- It works by using a while loop that sets the temporary value = b and sets a = b and b = a modulo b where modulo is the remainder of integer division and a = the the orignal value of b i.e. the temporary variable.
- This function repeats and iterates over new values of a and b until b == 0
- It returns the most recent value of a where a is the GCD of a and b

- recursiveGCD() takes two integer arguments a and b. 
- It calcultates the GCD of a and b using recursive functions.
- It works similarly to the iterative method without using temporary values.
- It uses if/else statements recursively by calling the function in the else statement in its own definition
- If b==0 then a is returned where a is the GCD of a and b
- Otherwise the function is recursively performed on (a, a modulo b) until b==0 is achieved

- In the main function, a and b are inputted by the user and the inputted value sare tested if they obey the requirements of a and b (i.e. positive integers)
- There is also commented out code where a and b can be two random integers from 1 to 12 which can be altered/included.
- The two functions are called for the inputed a and b and  results are printed along with the values of a and b.
- The function is then terminated.





