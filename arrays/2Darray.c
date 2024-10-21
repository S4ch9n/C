#include<stdio.h>

int main() {
    int arr[2][3]; // Correct size for the array
    // Input elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Output elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}
