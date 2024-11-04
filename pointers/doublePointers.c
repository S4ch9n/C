#include<stdio.h>
void main(){
  int a = 10;
  int *p = &a;    // p stores the address of a
  int **q = &p;   // q stores the address of p, making it a pointer to a pointer
  int ***r = &q;  // r stores the address of q, making it a pointer to a pointer to a pointer

  printf("a = %d\n", a); //10          // prints the value of a
  printf("a = %d\n", *p); //10        // dereferences p to get the value of a
  printf("a = %d\n", *(*q)); //10      // dereferences q twice to get the value of a
  printf("a = %d\n", *(*(*r)));//10    // dereferences r three times to get the value of a

  printf("the address of q is %x %x \n", r, &q); // prints the address of q using r and &q
  printf("the address of p is %x %x\n", q, &p);  // prints the address of p using q and &p
}
