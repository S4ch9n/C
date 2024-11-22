#include<stdio.h>
int main(){
  int a = 12;
  int *ptr = NULL;
  int *ptr2;
  if(ptr == NULL){
    printf("this is a null pointer");
  }
  else{
    printf("%d\n",*ptr);
  }
  //this is a way to declare a null pointer 
  // printf("%d\n",ptr); //0
  // printf("%d\n",*ptr); //will throw error or system will crash , because we cant dereference the null pointer
  // printf("%d\n",ptr2); //will throw garbage value
}