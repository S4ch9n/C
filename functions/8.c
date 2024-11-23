#include<stdio.h>

// Function declaration: A function that takes two integer arguments and returns an integer
int sum(int, int);

void main() { // Main function
  int a, b, c; // Variables for input and the result
  
  // Prompt the user to enter two numbers
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  // Calling the `sum` function with arguments `a` and `b`
  // The returned value is stored in variable `c`
  c = sum(a, b);

  // Displaying the result
  printf("Total is: %d\n", c); 
}

// Function definition: 
// This function takes two integer arguments, computes their sum, and returns the result
int sum(int x, int y) {
  return x + y; // Returning the sum of `x` and `y` to the calling function
}
