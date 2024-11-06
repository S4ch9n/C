#include<stdio.h>  // Include standard input-output library

int main() {
    int arr[5] = {1, 0, 3, 4, 5};  // Initialize an integer array with 5 elements
    int *p = &arr[0];  // Declare a pointer 'p' and point it to the first element of the array

    printf("%d is the value \n", *p);  // Print the value at the pointer (arr[0] = 1)
    printf("%d is the address \n", p);  // Print the address stored in the pointer (address of arr[0])

    p = p + 2;  // Move the pointer 2 positions forward (points to arr[2])
    printf("%d is the value\n ", *p);  // Print the value at the new pointer location (arr[2] = 3)
    printf("%d is the address \n", p);  // Print the new address of the pointer (address of arr[2])

    *p = 12;  // Modify the value at the current pointer location (arr[2] = 12)
    printf("%d is the value\n ", *p);  // Print the updated value at the pointer (now arr[2] = 12)
    printf("%d is the address \n", p);  // Print the address again (address of arr[2])

    return 0;  // Exit the program
}
