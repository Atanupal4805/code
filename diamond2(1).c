#include <stdio.h>
 int main() {
     
     int n;
     printf("Enter row no: ");
     scanf("%d", &n);
     
     for (int row = 1; row <= 2 * n; row++) {
        int c = row > n ? 2 * n - row : row;

        for (int space = 0; space < n - c; space++) {
            printf("  ");
        }

        for (int col = c; col >= 1; col--) {
            // printf("%d ", col);
            printf("* ");
        }
        for (int col = 2; col <= c; col++) {
            // printf("%d ", col);
            printf("* ");
        }

        printf("\n");
    }
     
 }