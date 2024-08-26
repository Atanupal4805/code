#include <stdio.h>

int main() {

    int rows;
    int x = 97;
    printf("Enter a number: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
