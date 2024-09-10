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