#include <stdio.h>

// Function declaration: A function that takes no arguments and does not return any value
void sum();

void main() { // Main function
  // Demonstrating the use of a function with no arguments and no return type
  printf("hola\n"); // Print a message
  sum();            // Call the `sum` function
  
  printf("hello\n"); // Print another message
  sum();             // Call the `sum` function again
}

// Function definition: 
// This function does not take any arguments and does not return any value
void sum() {
  int a = 12, b = 10, sum = 0; // Local variables for computation
  sum = a + b;                // Calculate the sum of `a` and `b`
  printf("%d\n", sum);        // Print the result of the sum
  printf("hi\n");             // Print a message
}
