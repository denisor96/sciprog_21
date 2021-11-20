This weeks practical contains one exercises, requiring two programs and one header file.

---------------------------------------------------------------------------------------------------------------------------------------------------------

ms_user_input.c
- This program takes a user inputted square i.e. a matrix , and tests if it is a magic square
- A magic square is a square where every row sum = every column sum = every diagonal sum and the square contains distinct numbers
- There is one header file called in the program - magic_square.h (description below)
- This function requires two inputs from the user. n - an integer equal to the size of the square i.e. length of row and column. 
- The user then has to input each integer value of the matrix/square. The user inputs one row at a time with each value separated by a space or a linespace.

- In the main function, n is input by the user
- A matrix of size nxn is dynamically allocated
- The values of the square is assigned by the user
- The function calls isMagicSquare from the header file on the square and n.
- The output of the function is then used to print whether the square is magic or not

---------------------------------------------------------------------------------------------------------------------------------------------------------

ms_file_input.c

- This program takes a file inputted square i.e. a matrix , and tests if it is a magic square
- A magic square is a square where every row sum = every column sum = every diagonal sum and the square contains distinct numbers
- There is one subfunction in this program - getlines() which calculates the number of lines in a given file
- There is one header file called in the program - magic_square.h (description below)
- This function requires one input from the user - the file name of a file in the current directory solely containging the square is that being tested. 

- getlines() has one argument - filename
- The file is opened to read
- A loop over the characters of the entire file counts the number of linebreaks ('\n') present and returns this value

- In the main function, the filename is input by the user 
- There are two sample txt files in the directory to try - IS_magic_square.txt and IS_NOT_magic_square.txt
- n, the number of lines in the file is obtained using getlines()
- A matrix of size nxn is dynamically allocated
- The values of the square scanned using fscanf
- The function calls isMagicSquare from the header file on the square and n.
- The output of the function is then used to print whether the square is magic or not

---------------------------------------------------------------------------------------------------------------------------------------------------------

magic_square.h

- This is a header file which contains one function - isMagcicSquare
- This function takes two arguements, a square matrix, in the form of a pointer to a pointer and it's dimension n
- This function perfoms the test to see if the inputed matrix is a magic square 
i.e (every row sum = every column sum = every diagonal sum and th e square contains distinct numbers)
- If the inputted square is magic it returns 1 otherwise it returns 0

---------------------------------------------------------------------------------------------------------------------------------------------------------
