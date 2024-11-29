//finding factorial using indirect way

#include<stdio.h>

// Declaration of mutually recursive functions
int fun1(int);
int fun2(int);

void main() {
    // Calling fun1 with 5 and printing the result
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d", fun1(n));
}

// Function fun1: Calculates n * fun2(n - 1) unless n <= 1
int fun1(int n) {
    if (n <= 1) {
        // Base case for fun1: Return 1 when n <= 1
        return 1;
    } else {
        // Recursive case for fun1: n * result of fun2(n - 1)
        return n * fun2(n - 1);
    }
}

// Function fun2: Calculates n * fun1(n - 1) unless n <= 1
int fun2(int n) {
    if (n <= 1) {
        // Base case for fun2: Return 1 when n <= 1
        return 1;
    } else {
        // Recursive case for fun2: n * result of fun1(n - 1)
        return n * fun1(n - 1);
    }
}
