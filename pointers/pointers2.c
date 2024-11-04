#include <stdio.h>
int main(){
  int a = 10 , b = 20;
  int *p , *q;
  p = &a;
  // q = p;  //10
  // *q = *p; will throw error
  // q = &b; //20
   q = &b; 
  *q = *p;//10


  printf("a = %d %d %d " , a , *p , *q); //10 10 10
}
