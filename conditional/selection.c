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
  
  if(n > 0 && n <= 100) 
      printf("%d is greater than 0 and less than or equal to 100.\n",n);
  else if(n > 100 && n <= 1000) 
      printf("%d is greater than 100 and less than or equal to 1000.\n",n);
  else if(n > 1000) 
      printf("%d is greater than 1000.\n",n);
  else{
     printf("Please enter a valid number.\n");
  }

  return 0;
}

//character user input
#include<stdio.h>
int main() {
    char a;  // Variable to store a single character
    printf("Enter character name: ");
    scanf(" %c", &a);  // Notice the space before %c to handle the newline
    printf("Entered character is: %c\n", a);  // Print the character
    return 0;
}


//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main(){
  int a,b;
  printf("Enter first number :");
  scanf("%d",&a);
   printf("Enter second number :");
  scanf("%d",&b);
  if(a == b){
    printf("a is %d , b is %d and both are equal number",a,b);
    return 0;
  }else{
    printf("a is %d , b is %d and both are not equal number",a,b);
  }
  return 0;
}

//is leap year or not
#include<stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    //condition to check if year is leap or not 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}


//user is eligible for vote or not
#include<stdio.h>
int main(){
  int a; //enter user age
  printf("Enter user age : ");
  scanf("%d",&a);
  if(a >= 18) printf("User is eligible for vote");
  else printf("user is not eligible for vote");
  return 0;
}


//Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
#include<stdio.h>
int main(){
    int m, n;
    printf("Enter m value: ");
    // Check if the input is valid
    if (scanf("%d", &m) != 1) {
        // If scanf does not return 1, the input was invalid (non-integer value)
        printf("Invalid input! Please enter an integer value.\n");
    } else {
        // If the input is a valid integer, proceed with the conditions
        if (m > 0) {
            n = 1;
            printf("The value of n is %d\n", n);
        } else if (m == 0) {
            n = 0;
            printf("The value of n is %d\n", n);
        } else if (m < 0) {
            n = -1;
            printf("The value of n is %d\n", n);
        }
    }
    return 0;
}


//Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main(){
    float userHeight;
    // Ask the user to input their height
    printf("Enter your height in cm: ");
    scanf("%f", &userHeight);
    // Determine height category
    if(userHeight < 150)
        printf("very small height\n");
    else if(userHeight >= 150 && userHeight < 165)
        printf("small height\n");
    else if(userHeight >= 165 && userHeight < 175)
        printf("average height\n");
    else if(userHeight >= 175 && userHeight <= 195)
        printf("tall height\n");
    else if(userHeight > 195)
        printf("abnormal height\n");
    return 0;
}

//Write a C program to find the largest of three numbers.
#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter first number");
  scanf("%d",&a);
   printf("enter second number");
  scanf("%d",&b);
   printf("enter third number");
  scanf("%d",&c);
  if(a > b){
    if(a > c){
      printf("a is greatest among three");
    }else{
      printf("c is greatest among three");
    }
  }
  else if(b > c){
    printf(" b is greatest among three");
  }else{
      printf("c is greatest among three");
  }
  return 0;
}