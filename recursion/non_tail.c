#include<stdio.h>
void ntail(int a){
  if(a < 1) return;
  else{
    printf("%d ",a);
    ntail(a/2);
    printf("%d ",a);
  }
}
void main(){
  ntail(10);
}

//2
#include<stdio.h>
int foc(int a){
  if( a < 1) return 0;
  else return 1 + foc(a/2);
}
int main(){
  int x;
  x = foc(10);
  printf("%d",x);
}