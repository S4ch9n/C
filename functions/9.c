#include <stdio.h>

// Function declarations
void fun(int a, int b);        // Call by value
void fun2(int *x, int *y);     // Call by reference

int main() {
    int a, b;

    // Demonstrate call by value
    printf("Enter the values for the first function (call by value):\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Actual values before calling the function, a = %d, b = %d\n", a, b);
    fun(a, b);  // Call by value
    printf("Actual values after calling the function, a = %d, b = %d\n", a, b);

    // Demonstrate call by reference
    printf("Enter the values for the second function (call by reference):\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Actual values before calling the function, a = %d, b = %d\n", a, b);
    fun2(&a, &b);  // Call by reference
    printf("Actual values after calling the function, a = %d, b = %d\n", a, b);

    return 0;
}

// Call by value function
void fun(int a, int b) {
    a = 3;
    b = 4;
    printf("Inside fun (call by value), a = %d, b = %d\n", a, b);
}

// Call by reference function
void fun2(int *x, int *y) {
    *x = 10;
    *y = 20;
    printf("Inside fun2 (call by reference), *x = %d, *y = %d\n", *x, *y);
}
