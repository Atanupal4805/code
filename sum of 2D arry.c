#include <stdio.h>

int main() {
    int arr[4][3];
    int brr[4][3];
    int crr[4][3];
    
    printf("Array 1: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter value for element at row %d, col %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Array 2: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter value for element at row %d, col %d: ", i+1, j+1);
            scanf("%d", &brr[i][j]);
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }

    printf("\nThe sum of array is:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", crr[i][j]);
        }
    printf("\n");
    }
    

    return 0;
}
