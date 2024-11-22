#include<stdio.h>
int main(){
  void *ptr;
  int a = 5;
  float b = 1.23;
  char c = 'A';

  ptr = &a; //storing the  address of a variable
  printf("%d\n", *(int *)ptr); //dereferencing the pointer to int datatype

  ptr = &b; //storing the address of b variable
  printf("%f\n",*(float *)ptr); //dereferencing the pointer to float datatype

  ptr = &c; //storing the  address of c variable
  printf("%c\n",*(char *)ptr); //dereferencing teh pointer to char type

}