// //rectangle patterns
#include<stdio.h>
int main(){
  for(int i = 1 ; i <= 5 ; i++){
    for(int j = 1 ; j <= 5 ; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//right-half triangle
#include<stdio.h>
int main(){
  for(int i = 1 ; i <= 5 ; i++){
    for(int j = 1 ; j <= i ; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//inverted Right Half Pyramid Pattern in C
#include<stdio.h>
int main(){
  for(int i = 5 ; i >=0 ; i--){
    for(int j = 1 ; j <= i ; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}



