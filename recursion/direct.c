#include<stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n);

int main() {
    int n;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n); // Read input from the user and store it in variable 'n'
    
    // Check if the input is a negative number
    if (n < 0) {
        // Display an error message for negative numbers
        printf("Number can't be negative.\n");
    } else {
        // Calculate and display the factorial of the number
        printf("Factorial of %d is %d\n", n, factorial(n));
    }
    
    return 0; // Indicate that the program ended successfully
}

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) 
        // Base case: factorial of 0 or 1 is 1
        return 1;
    else 
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
}
