#include <stdio.h>

// Function declaration: A function that takes two float arguments and does not return a value
void fun(float, float); 

void main() { // Main function
  float a, b;
  
  // Prompt the user for input
  printf("Enter two numbers: ");
  scanf("%f %f", &a, &b);

  // Calling the function with the values entered by the user
  // The arguments (actual parameters) are passed to the function
  fun(a, b); 
}

// Function definition
// This function takes two float arguments and directly prints their sum
void fun(float a, float b) { 
  printf("The sum is: %f\n", a + b);
}
