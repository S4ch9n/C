//
#include <stdio.h>   // Required for standard input and output functions
#include <stdlib.h>  // Required for exit() function
#include <string.h>  // Required for string manipulation functions like strcspn()

void main() {
    FILE *fp = NULL;                 // File pointer to handle the file
    char str[50] = "hello my name is abc"; // String to write to the file
    int a = 10;                      // Integer to write to the file
    float b = 9.0;                   // Float to write to the file
    
    // Open the file "hello.txt" in write mode
    fp = fopen("hello.txt", "w");
    if (fp == NULL) { // Check if the file failed to open
        perror("Error opening file");
        exit(1); // Exit the program with an error code
    }
    
    // Write formatted data to the file
    fprintf(fp, "String: %s\nInteger: %d\nFloat: %.2f\n", str, a, b);

    // Close the file
    if (fclose(fp) != 0) { // Check if the file failed to close
        perror("Error closing file");
    }
}