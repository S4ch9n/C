//taking input from user and printing the entered value
//run time example 
#include<stdio.h>
int main(){
    int arr[5];
    printf("enter a number : ");
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&arr[i]);
    }
     for(int i = 0 ; i < 5 ; i++){
        printf("%d",arr[i]);
    }
    return 0;
}

//entering elements in array using conditional statements
#include<stdio.h>
int main(){
    int arr[100];
    for(int i = 0 ; i < 100 ; i++){
        if( i < 30 ){
            arr[i] = 1;
        }else{
            arr[i] = 2;
        }
        printf("%d",arr[i]);
    }
    return 0;
}


//iteration arrays elements using loops
#include <stdio.h>
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10,11};
  for(int i = 0 ; i < 10 ; i++){
    printf("%d" , arr[i]);
  }
  return 0;
}


//Read n number of values in an array and display it in reverse order
#include <stdio.h>
int main() {
    #define n 10  // Removed the semicolon
    int arr[n];
    // Reading input values into the array
    for(int i = 0; i < n; i++) {
        printf("Enter a number: \n");
        scanf("%d", &arr[i]);
    }
    // Printing the values stored in the array
    printf("Printing stored elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Printing elements in reverse order
    printf("Printing elements in reverse order: ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// Find the sum of all elements of an array
#include <stdio.h>
int main() {
    #define n 5  // Removed the semicolon
    int arr[n], sum = 0;
    // Reading input values into the array
    for(int i = 0; i < n; i++) {
        printf("Enter a number : ");
        scanf("%d", &arr[i]);
    }
    // for printing the sum of elements in arrays
    for(int i = 0; i < n; i++) {
       sum += arr[i];
    }
    printf("The sum of array element is : %d",sum);
    return 0;
}

///Write a program in C to copy the elements of one array into another array.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr1[5],arr2[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter a number : ");
        scanf("%d",&arr1[i]);
    }
    printf("entered number in original  array is : ");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("copying elements of original array into another array : ");
    for(int i = 0 ; i < 5 ; i++){
        arr2[i] = arr1[i];
    }
    //printing another array
     for(int i = 0 ; i < 5 ; i++){
         printf("%d ",arr2[i]);
    }
    return 0;
}

//declare an array of 10 elements and write the condition , where you only gave to fetch 5 elements and also take input from user .
#include <stdio.h>
int main(){
    int arr[60];
    for(int i = 0 ; i < 10 ; i++){
            printf("number : ");
            scanf("%d",&arr[i]);
    }
      for(int i = 0 ; i < 10 ; i++){
               printf("%d",arr[i]);
    }
   return 0;
}