#include <stdio.h>
int main()
{
  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", i);
  }
  return 0;
}

// takes an integer n as an input and calculate the sum of first natural number using loop
#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter a number :");
  scanf("%d", &n);
  // natural number should be greater then 0 , so we will set condition
  if (n < 1)
  {
    printf("Natural number should be greater then 0");
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      // sum will be
      sum = sum + i;
    }
    printf("The sum of natural number is : %d\n", sum);
  }
  return 0;
}

//print number in reverse order
#include<stdio.h>
int main(){
  for(int i = 10; i >= 0 ; i--){
    printf("%d\n",i);
  }
  return 0;
}

//multiplication of n number from 1 - 10
#include<stdio.h>
int main(){
  int n;
  printf("Enter number for multiplication : ");
  scanf("%d",&n);
  //n should be greater or equal then 0;
  if(n<0){
    printf("invalid");
  }else{
      printf("multiplication of number : %d\n" ,n);
    for(int i = 1 ; i <=10 ; i++){
      printf("%d * %d = %d\n",n , i , n * i);
    }
  }
  return 0;
}

//factorial of  n number
#include<stdio.h>
int main(){
  int n , factorial = 1;
  printf("Enter a number : ");
  scanf("%d",&n);
  printf("The factorial of %d is : ",n);
  for(int i = 1 ; i <= n ; i++){
    factorial = factorial * i;
  }
  printf("%d", factorial);
  return 0;
}