//A tail-recursive function is one where the recursive call is the last operation performed by the function. There are no further computations or statements after the recursive call. This allows for certain optimizations, such as reusing the same stack frame for multiple calls.
#include<stdio.h>
void tail(int a){
  if(a < 1) return;
  else{
    printf("%d ",a);
    tail(a/2);
  }
}
void main(){
  tail(10);
}