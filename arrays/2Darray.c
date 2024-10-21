//taking inputs and printing elements in 2D arrays
#include<stdio.h>

int main() {
    int arr[2][3]; 
    // Input elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Output 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}


//taking input from the user and find the total of elements present in 2D arrays
#include <stdio.h>
int main(){
    int arr[2][5],sum = 0;
    //taking input from the user
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            printf("enter elements : ");
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            printf("%d\t",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("total sum is : %d", sum);
    return 0;
}

//transpose of matrix
#include <stdio.h>
int main(){
    int arr[2][5],sum = 0;
    //taking input from the user
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            printf("enter elements : ");
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}