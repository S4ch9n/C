#include<stdio.h>

// Define a structure named 'abc'
struct abc {
  int a;         // Integer variable (typically 4 bytes)
  char b[20];    // Character array (string of up to 20 characters)
  float c;       // Floating-point variable (typically 4 bytes)
};

void main() {
  // Initialize the structure using designated initializers
  struct abc s = { 
    .b = "hello",  // Use designated initializer to assign the string "hello" to the 'b' array.
                   // This initializes the first 6 elements of 'b' (5 characters + 1 null terminator).
    .c = 6,        // Use designated initializer to assign the value 6 to the float 'c'.
    .a = 1         // Use designated initializer to assign the value 1 to the integer 'a'.
  };

  // Print the values of the members in the structure
  printf("a -  %d , b - %s , c -  %f ", s.a, s.b, s.c);
}
