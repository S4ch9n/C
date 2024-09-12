//simple calculator
#include <stdio.h>
int main()
{
  char operator;
  int a, b, result;
  printf("Enter first number :");
  scanf("%d", &a);
  printf("Enter second number :");
  scanf("%d", &b);
  printf("enter any operator value (+,-,*,/) :");
  scanf(" %c", &operator);
  switch (operator)
  {
  case '+':
    result = a + b;
    printf("the addition of two number is :%d\n", result);
    break;
  case '-':
    result = a - b;
    printf("the subtraction of two number is :%d\n", result);
    break;
  case '*':
    result = a * b;
    printf("the multiplication of two number is :%d\n", result);
    break;
  case '/':
    if (b == 0)
    {
      printf("b value can't be zero");
      break;
    }
    else
    {
      result = a / b;
      printf("the division of two number is :%d\n", result);
      break;
    }
  default:
    printf("Please enter valid number");
  }
}

// print week day
#include <stdio.h>
int main()
{
  int week;
  printf("enter week number from 1-7 : ");
  scanf("%d", &week);
  switch (week)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;

  case 5:
    printf("Friday");
    break;

  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("please enter valid number between 1 - 7 ");
    break;
  }
  return 0;
}

// Write a C program print total number of days in a month using switch case
#include <stdio.h>
int main()
{
  int month;
  printf("Enter month number(1-12): ");
  scanf("%d", &month);
  switch (month)
  {
  case 1:
    printf("31 days");
    break;
  case 2:
    printf("28/29 days");
    break;
  case 3:
    printf("31 days");
    break;
  case 4:
    printf("30 days");
    break;
  case 5:
    printf("31 days");
    break;
  case 6:
    printf("30 days");
    break;
  case 7:
    printf("31 days");
    break;
  case 8:
    printf("31 days");
    break;
  case 9:
    printf("30 days");
    break;
  case 10:
    printf("31 days");
    break;
  case 11:
    printf("30 days");
    break;
  case 12:
    printf("31 days");
    break;
  default:
    printf("Invalid input! Please enter month number between 1-12");
  }
  return 0;
}

//Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main() {
    char a;
    printf("Enter any character: ");
    scanf("%c", &a);  // Use %c to read a character
    switch (a) {
        case 'a':
        case 'A':  // for uppercase vowels as well
            printf("a is a vowel");
            break;
        case 'e':
        case 'E':
            printf("e is a vowel");
            break;
        case 'i':
        case 'I':
            printf("i is a vowel");
            break;
        case 'o':
        case 'O':
            printf("o is a vowel");
            break;
        case 'u':
        case 'U':
            printf("u is a vowel");
            break;
        default:
            printf("not a vowel");
            break;
    }
    return 0;
}

//find greatest number among two number
#include<stdio.h>
int main(){
  int num1,num2;
  printf("enter two number");
  scanf("%d%d",num1,num2);
  switch(num1 > num2){
    case 1:
    printf("%d is greater then %d",num1,num2);
    case 2:
    printf("%d is greater then %d",num2,num1);
  }
  return 0;
}