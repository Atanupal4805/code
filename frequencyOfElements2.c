#include <stdio.h>

int main() {
    int a[10], b[201] = {0}, i, c;

    for (i = 0; i < 10; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
        b[a[i]]++; // Increment the frequency of the entered element in array b
    }

    printf("Element frequencies:\n");
    for (i = 0; i <= 200; i++) {
        if (b[i] > 0) {
            printf("%d is repeated %d times\n", i, b[i]);
        }
    }

    return 0;
}
