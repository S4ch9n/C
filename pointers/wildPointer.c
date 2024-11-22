#include<stdio.h>
#include<stdlib.h>
int main(){
  int *ptr; //wild pointer
  printf("%d",*ptr); //will throw garbage value because we did'nt initialize ptr to any variable
}