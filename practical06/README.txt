This weeks practical contained one exercises, but is executed in different ways.Performed directly and with the use of a  Makefile

---------------------------------------------------------------------------------------------------------------------------------------------------------

mult_mat.c
- This program performs matrix multiplation on two specified matrices and prints the resulting matrix.
- This program requires no input from the user.
- There are no subfunctions involved in this program.

- The program declares and populates two matrices A (n x p) and B (p x q) using for loops over their respective dimensions.
- Each entry in A is calculated as i + j where i is the row index and j is the column index (index beginning at 0)
- Each entry in B is calculated as i - j where i is the row index and j is the column index (index beginning at 0)
- A third matrix C (n x q) is declared and initially populated with 0.0 for each entry
- Using loops over the dimensions n, q and p (in that order), the C[i,j] is calculated as the product of the row i of A and the column j of B where elements are multiplied piecewise and the sum is calculated.
- The program then loops over the matrices dimensions and prints their values individually, skipping a line after each row.
- The program is then terminated.

---------------------------------------------------------------------------------------------------------------------------------------------------------

STEP6  ->  mm.c  main.c  Makefile
- The files in STEP6 achieve the same outcome of mult_mat.c but uses a different process.
- No imput is required from the user and to compile all functions, all that needs to be called is 'make'. 
- To run the compiled programs, the user should enter './mmc'.

- mm.c contains just a function mat_mult(), only the matrix multiplication element of the exercise.
- It takes six agruments; the dimensions of A, B and C i.e. n,p,q and the arrays A,  B and C.
- As C is only being updated there is nothing returned from the function.

- main.c performs everything else required - declaring and initialising all variables and printing the results. 
- matmult() is called in main.c using the appropriate variables and assigns C the correct values.

- The Makefile controls compilation and linking of main.c and mm.c
- main.c and mm.c are compiled into main.o and mm.o using the specified compiler and linking flags.
- The compiled files are then prerequisites for the linking stage where they are combined and the target is the compiled file - mmc.
- The clean function removes the compiled .o files in order to save memory on the system.
---------------------------------------------------------------------------------------------------------------------------------------------------------
