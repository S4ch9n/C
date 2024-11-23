#include <stdio.h>

// Function declaration
// Declares the function so it can be used in the program
void sum(); 

void main() { // Main function where program execution begins
    sum(); // Function call to execute the sum() function
}

// Function definition
void sum() { 
    int a, b, sum = 0; // Declare variables to store input and the sum
    printf("Enter two numbers: "); // Prompt the user to enter two numbers
    scanf("%d %d", &a, &b); // Read two integers from user input
    sum = a + b; // Calculate the sum of the two numbers
    printf("Sum is: %d\n", sum); // Display the result
    
    // Note: This function does not return any value to the main function,
    // so a 'return' statement is not required.
}





#include<stdio.h>

// Function declaration
// Declared outside the main() function so it can be used by other functions as well
char fun(); 

void main() {
    char ch; // Character variable to store the return value of the function
    ch = fun(); // Function call, the returned value is assigned to 'ch'
    printf("ch = %c", ch); // Prints the value stored in 'ch'
}

// Function definition , also match it with function declaration
char fun() { 
    char c; // Character variable to store user input
    printf("Enter a character: "); // Prompt the user to enter a character
    scanf("%c", &c); // Reads a character from user input and stores it in 'c'
    return c; // Returns the character to the calling function (main)
}
