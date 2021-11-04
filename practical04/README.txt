This weeks practical contained two exercises, each requiring its own program.

-----------------------------------------------------------------------------------------------------------------------------

prac04_part1.c

- This c program requires no input from the user
- This file initialises a global array y[] of size 13 i.e. y[12]
- The range [0,60] is divided into increments of 5 degrees i.e. 0,5,15,...,60
- This sequence is converted to radians before being passed into tan()
- This function then prints the array before finishing
- tan(Xi) is then stored as the ith value in the array
- The function prints the array before finishing

-----------------------------------------------------------------------------------------------------------------------------

prac04_part2.c

- This program requires input for the user (integer value ~ N)
- This program contains two subfunctions degtorad and taprule
- This prgram calulates the area under the curve of tan(x) from 0 to 60 degrees using the Trapezoidal rule over a user specified number of points N
- The traprule function takes N, splits [0,60] into N different points. It then uses degtorad to convert these values to radians and then gets the tan() of these values. The estimate for the area is calculated using the trapezoidal formula and these values and the area is retured.
- The main function prints the value of this area and compares it to the true value of the area using log(2).
 








-----------------------------------------------------------------------------------------------------------------------------

