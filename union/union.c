#include <stdio.h>

// Define a union named 'abc'
// A union allows multiple members to share the same memory location.
// Only one member can hold a meaningful value at any given time.
union abc {
    int a;    // Integer member
    char b;   // Character member
    float c;  // Float member
};

void main() {
    union abc u; // Declare a variable 'u' of type union 'abc'

    // Assign values to the union members
    u.a = 12;     // Assign 12 to the integer member 'a'
    u.b = 'j';    // Assign 'j' to the character member 'b' (overwrites 'a')
    u.c = 90;     // Assign 90 to the float member 'c' (overwrites 'b')

    // Print the values of each member
    // NOTE: Since union members share memory, only the last-assigned member ('c') 
    // will retain a meaningful value. Accessing other members leads to undefined behavior.
    printf("a is : %d \n", u.a);  // Accessing 'a' (interpreting memory as int)
    printf("b is : %c \n", u.b);  // Accessing 'b' (interpreting memory as char)
    printf("c is : %f \n", u.c);  // Accessing 'c' (interpreting memory as float)
}

