//call by value
#include<stdio.h>

// Function declaration
int func(int , int); 

int main() {
  int x = 12, y = 5;

  // Function call (passing x and y by value)
  func(x, y); 
  
  printf("This is the main function (calling function).\n");
  printf("x = %d, y = %d\n", x, y); // Values in main remain unchanged
  return 0;
}

// Function definition
int func(int x, int y) {
  x = 7; // Changes affect only local variables in this function
  y = 10;
  printf("This is the called function (func).\n");
  printf("x = %d, y = %d\n", x, y);
  return 0;
}






//call by reference
#include<stdio.h>

// Function declaration
int fu(int* x, int* y);

int main() {
  int x = 12, y = 5;

  // Function call (passing addresses of x and y to achieve call by reference)
  fu(&x, &y); 
  
  printf("This is the main function (calling function).\n");
  printf("x = %d, y = %d\n", x, y); // Values in main will be changed
  return 0;
}

// Function definition
int fu(int* x, int* y) {
  // Dereference pointers to modify the original variables
  *x = 7; 
  *y = 10;
  printf("This is the called function (func).\n");
  printf("x = %d, y = %d\n", *x, *y); // Prints modified values
  return 0;
}
