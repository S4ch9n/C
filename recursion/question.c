//Write a program in C to print the first 50 natural numbers using recursion.
#include<stdio.h>
int natural(int n){
  if (n <= 0 )
  return 1;
  else{
    return(n + 1);
  }
}
int main(){
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  if( n < 1){
    printf("the value cant be less than one : ");
  }else{
    printf("the natural numbers are %d\n: ",natural(n));
  }
}