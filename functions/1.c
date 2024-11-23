#include<stdio.h>
int sum(){ //function definition
  int a,b,sum=0;
  printf("enter two number : ");
  scanf("%d %d",&a,&b);
  sum = a + b;
  printf("sum is : %d\n",sum);
}
int main(){ //main function 
  sum(); //calling the function
  printf("hello\n");
  sum();
}