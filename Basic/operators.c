//sum of two number
#include<stdio.h>
int main(){
int a = 2; //initialize variable
int b = 3; //initialize variable
int sum = a + b; //initialize sum variable to add a and b
printf("%d",sum);
return 0;
}


//sum of two number with user input
#include<stdio.h>
int main(){
  int a , b , sum; //declare variable
  printf("Enter first number");
  scanf("%d" , &a );
  printf("Enter second number:");
  scanf("%d" , &b );
  sum = a + b;
  printf("sum of two number is %d\n" , sum);
  return 0;
}

//subtraction of two number with user input
#include<stdio.h>
int main(){
  int a , b , sum; //declare variable
  printf("Enter first number:");
  scanf("%d" , &a );
  printf("Enter second number:");
  scanf("%d" , &b );
  sum = a - b;
  printf("subtraction of two number is %d\n" , sum);
  return 0;
}

//multiplication of two number with user input
#include<stdio.h>
int main(){
  int a , b , sum; //declare variable
  printf("Enter first number:");
  scanf("%d" , &a );
  printf("Enter second number:");
  scanf("%d" , &b );
  sum = a * b;
  printf("multiplication of two number is %d\n" , sum);
  return 0;
}

//division of two number with user input
#include<stdio.h>
int main(){
  int a , b , sum; //declare variable
  printf("Enter first number:");
  scanf("%d" , &a );
  printf("Enter second number:");
  scanf("%d" , &b );
  sum = a / b;
  printf("division of two number is %d\n" , sum);
  return 0;
}
