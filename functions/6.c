#include<stdio.h>

// Function declaration: A function that takes no arguments but returns an integer
int sum(void);

void main() { // Main function
  int total; // Variable to store the return value of the function

  // Calling the function `sum` which takes no arguments
  total = sum(); 

  // Displaying the returned value
  printf("Total is: %d\n", total);
}

// Function definition: 
// This function does not take any arguments, performs a computation, and returns the result
int sum() {
  int a = 1, b = 2; // Local variables for the computation
  return a + b; // Returning the sum of `a` and `b` to the calling function
}
