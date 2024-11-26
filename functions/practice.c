#include<stdio.h>

// Function to calculate the square of a number
int sqr(int a);

int main() {
    int a, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Call the function and store the result
    result = sqr(a);

    // Display the result
    printf("The square of %d is: %d\n", a, result);

    return 0; // Indicate successful program termination
}

// Function definition
int sqr(int a) {
    return a * a; // Calculate and return the square
}




#include<stdio.h>

// Function declaration
void swap(int *a, int *b); 

int main() {
    int a, b;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Print numbers before swapping
    printf("Before swapping\n");
    printf("a is %d and b is %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Print numbers after swapping
    printf("After swapping\n");
    printf("a is %d and b is %d\n", a, b);

    return 0; // Indicate successful program termination
}

// Function definition to swap two numbers
void swap(int *a, int *b) {
    int temp;
    temp = *a;  // Store value of a in temp
    *a = *b;    // Assign value of b to a
    *b = temp;  // Assign value of temp (original a) to b
}




//Write a program in C to check if a given number is even or odd using the function.
#include<stdio.h>

// Function prototype
int num(int);

int main() {
    int inputNumber;
    
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    
    // Call the function and display the result
    if (num(inputNumber) == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    
    return 0; // Indicating successful execution
}

// Function definition
int num(int number) {
    return number % 2 == 0 ? 0 : 1; // Return 0 for even, 1 for odd
}
