#include<stdio.h>  // Required for standard input and output functions
#include<stdlib.h> // Required for exit() function
#include<string.h> // Required for string manipulation functions like strcspn()

void main() {
    FILE *fp = NULL; // File pointer to handle the file
    char str[50] = "hello my name is abc";    // Array to store the input string
    int a = 10;
    float b = 9;
    
    // Open the file "hello.txt" in write mode
    // If the file doesn't exist, it will be created
    fp = fopen("hello.txt", "w");
    if (fp == NULL) { // Check if the file failed to open
        perror("Error opening file"); // Print error message
        exit(1); // Exit the program with an error code
    }
    
    // Prompt the user to enter a string
    printf("Enter the string: ");
    
    // Read input from the user safely using fgets
    // fgets() ensures that the input does not exceed the buffer size
    if (fgets(str, sizeof(str), stdin)) {
        // Remove the newline character added by fgets if present
        str[strcspn(str, "\n")] = '\0';
    }

    // Write the string to the file
    // fputs() writes a null-terminated string to the specified file
    fputs(str, fp);
    // Close the file
    // fclose() flushes the output buffer and closes the file to save changes
    if (fclose(fp) != 0) { // Check if the file failed to close
        perror("Error closing file"); // Print error message
    }
}






