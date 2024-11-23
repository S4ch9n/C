#include<stdio.h>
int sum(); //function declaration
int main(int , int){
  sum(5,6);

}
int sum(int a , int b){
  int sum = a + b ;
  printf("%d",sum);
}



//2nd
#include<stdio.h>
int sum(int, int); // Function declaration

int main() {
    int result = sum(5, 6); // Capture the returned value of the function
    printf("%d", result);  // Print the returned value
    return 0;              // Indicate successful program termination
}

int sum(int a, int b) {
    int result = a + b;    // Use a variable name that doesn't shadow the function name
    return result;         // Return the sum to the caller
}



// parameters and arguments
#include<stdio.h>
int sum(int a, int b); // Parameters: a, b

int main() {
    int result = sum(5, 6); // Arguments: 5, 6
    printf("%d", result);
    return 0;
}

int sum(int a, int b) { // Parameters: a, b
    int result = a + b; // a = 5, b = 6
    return result; // Returns 11
}
