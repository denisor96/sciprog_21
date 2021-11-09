This weeks practical contained two exercises, each requiring its own program.

---------------------------------------------------------------------------------------------------------------------------------------------------------

Fibon.c
- This program takes an input, N, and prints the first N values of the Fibonnacci Sequence.
- This program requires one input from the user, to specify N. N must be in the form of a positive integer (>1)

- There is one sub-function fibo() which controls an iteration of the sequence i.e. sum two most recent values to get the next value in the sequence.
- fibo() takes two integer pointer arguments. 
- It initalises a local variable 'next' and uses it to assign larger value to the smaller value the sum of the two to the larger value.
- This is effect, produces the next value in the Fibonacci Sequences and allows it to be performed iteratively.

- The program initalises two integers, N1 and N2 to compute each value in the sequence. The initial values of the sequence is always 0(N1) and 1(N2).
- N1 will be treated as the value of the sequence while N2 is used to in relation to it to calculate subsequent values.
- The program prints context for the sequence and prints the first value of the sequence, N1.
- The program calls fibo() in a for loop that runs N - 2 times in order to get the next N-2 values in the sequence 
- For each iteration of the loop, each value is printed on a new line.
- This program runs fibo() and  prints the final (N-th) value of the Fibonnacci Sequence on a new line and the function is terminated.

--------------------------------------------------------------------------------------------------------------------------------------------------------

InvHypTan.c
- This program calculates the inverse hyperbolic tangent (IHT) using two different methods for x, where |x| < 1.
- The first method involves expressing the IHT as a MacLaurin Series
- The second method calculates the IHT using natural logarithims
- The method using natural logarithms gives the true value for INV(x) while the MacLaurin Series is an estimation.

- This program requires one input from the user; delta
- delta is the given precision of the MacLaurin Series in order to prevent it from iterating indefinitely

- There are two subfunctions arctanh1() and arctanh2()
- arctanh1x(x,delta) takes one integer argument ,x, and one double precision arguement delta
- It then returns the IHT of x using a MacLaurin series with a precision of delta i.e. when the series stops when an element is less than delta.
- arctanh2(x) takes one integer argument x.
- This function returns the IHT of x using natural logarithms.

- This program calculates the IHT(x) of x in [-.90, 0.90] in increments of 0.01 as specified in the practical sheet
- (0.90 - (-0.90)) / 0.01 =  180 i.e. IHT(x) is caclulated 180 times for each method. 
- Three arrays of size 180 are defined. 
- tan1[], tan2[] and diff corresponding with IHT of method 1, method 2 and the difference between the two for each value of x.
- A loop is then run over i from -.90 to 0.90 over positve increments of 0.01.
- A separate index j is used to populate the arrays, beginning at 0 and increasing by 1 for each increment.
- tan1[j] and tan2[j] are then populated with arctanh1(i, delta) and arctanh2(i) 
- The difference between tan1[j] and tan2[j] is computed, printed and added to a running total.
- Outside the loop, the total difference and %accuracy of the MacLaurin Series is then printed
- The function is then terminated

---------------------------------------------------------------------------------------------------------------------------------------------------------

