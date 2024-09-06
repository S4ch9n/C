#include <stdio.h>
int main()
{
  int a, b;
  printf("a is : ");
  scanf("%d", &a);
  printf("b is : ");
  scanf("%d", &b);
  if (a > b)
    printf("a is greater than b");
  else
    printf("b is greater than a");
    return 0;
}

// write a program to check whether number is positive , negative or zero
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter value: ");
  scanf("%d", &a);
  if(a > 0) printf("Number is positive ");
  else if(a < 0) printf("Number is negative ");
  else printf("Number is negative");
  return 0;
}

//write a program to check number is even or odd
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter value: ");
  scanf("%d", &a);
  if(a % 2 == 0) printf("Number is even ");
  else printf("Number is odd ");
  return 0;
}

//if first number is greater , lesser or equal 
#include<stdio.h>
int main(){
  int a , b; //declare variable
  printf("Enter first number :");
  scanf("%d" , &a );
  printf("Enter second number :");
  scanf("%d" , &b );
  if(a > b) printf(" first number is greater than second number");
  else if(a == b) printf(" first number and second number both are equal ");
  else printf("second number is greater than first number");
  return 0;
}

//program that takes a character as input & uses if an else statement to check wether the character is in alphabets or not
#include<stdio.h>
int main() {
    char alpha;
    printf("Enter a character: ");
    scanf(" %c", &alpha);  // Use %c for character input and add & to store input in 'alpha'
    if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) {
        printf("%c is an alphabet.\n", alpha);
    } else {
        printf("%c is not an alphabet.\n", alpha);
    }
    return 0;
}

//number is greater
#include<stdio.h>
int main(){
  int n; //enter number
  printf("Enter a number :");
  scanf("%d",&n);
  if(n>0) printf("%d is greater than 0. \n",n);
  else if(n>100) printf("%d is greater than 100. \n",n);
  else if(n>1000) printf("%d is greater than 1000. \n",n);
  else printf("not a number");
  return 0;
}