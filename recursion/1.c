//printing of number using recursion
#include<stdio.h>
int display(int);
void main(){
  int n = 5;
  display(n);
}
int display(int n){
  if(n < 1) return 1;
  printf("%d\n",n);
  display(n-1);
  printf("%d\n",n);
} 

