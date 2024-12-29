// Write a program in C to find the square of any number using the function.
#include<stdio.h>
double sqr(double num){
  return (num * num);
}
int main(){
  int num;
  double n;
  printf("enter a number : ");
  scanf("%d",&n);
  n = sqr(num);
  printf("sqr of %d is %d ",num,n);
}

//Write a program in C to swap two numbers using a function by call by reference.
#include <stdio.h>

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping, the value of a is: %d and b is: %d\n", a, b);

    // Pass the addresses of a and b to the swap function
    swap(&a, &b);

    printf("After swapping, the value of a is: %d and b is: %d\n", a, b);

    return 0;
}
