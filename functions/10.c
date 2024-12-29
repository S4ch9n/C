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

//Write a program in C to swap two numbers using a function.
#include <stdio.h>
int swap(int n , int n2){
  int temp = 0;
  temp = n;
  n = n2;
  n2 = temp;
  return n ,n2;
}
int main(){
  int a , b;
  printf("enter first number : ");
  scanf("%d",&a);
  printf("enter second number : ");
  scanf("%d",&b);
  printf("before swapping the value of a is : %d and b is %d ",a,b);
  swap(a,b);
  printf("after swapping the value of a is : %d and b is %d ",a,b);
}