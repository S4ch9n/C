#include<stdio.h>
#include<stdlib.h> //will be used malloc function for dynamically memory location , that is stored in this header file
int main(){
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  printf("%d\n",*ptr); //10
  free(ptr);//will free the memory , act a dangling pointer
  printf("%d\n",*ptr);
}