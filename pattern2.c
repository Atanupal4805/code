#include <stdio.h>

int main() {
    
    int rows;
    printf("Enter a number: ");
    scanf("%d",&rows);

    for (int i = 0; i < rows; i++) {
        char ch = 'a'; 
        for (int j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }
    return 0;
}
