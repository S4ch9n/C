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