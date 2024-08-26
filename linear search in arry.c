#include <stdio.h>

int main() {
    int arr[5], search, flag = 0;

    printf("Enter 5 elements:\n");
    for (int i = 0; i<= 4; i++) {
        printf("Element %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);

 
    for (int i = 0; i <= 4; i++) {
        if (arr[i] == search) {
            printf("Element %d present at index %d\n", search, i);
            flag = 1; 
            //break;
        }
    }

    // If element is not found
    if (!flag) {
        printf("Element %d not present in the array\n", search);
    }

    return 0;
}

