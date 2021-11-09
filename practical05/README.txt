This weeks practical contained two exercises, each requiring its own program.

------------------------------------------------------------------------------------------------------------------

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

-----------------------------------------------------------------------------------------------------------------

InvHypTan.c
- This program takes an input, N, and prints the first N values of the Fibonnacci Sequence.
- This program requires one input from the user, to specify N. N must be in the form of a positive integer (>1)

- There are two subfunctions arctanh1() and arctanh2 which compute







-----------------------------------------------------------------------------------------------------------------

