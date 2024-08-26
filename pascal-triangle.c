
#include <stdio.h>

int main() {
    
    int row;
    printf("Enter row no: ");
    scanf("%d", &row);
    
    for(int rowno = 1; rowno <= row; rowno++){
        
        for(int space = 1; space <= row-rowno; space++) {
        printf(" ");
        }
    
        for(int star = 1; star <= rowno; star++) {
            printf("* ");
        }
        
        printf("\n");
        
    }

    return 0;
}
