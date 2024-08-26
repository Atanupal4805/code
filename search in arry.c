#include <stdio.h>

int main() {
    int a[5], S_element, i;
    
    for(i = 0; i <= 4; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    
    printf("Enter search element: ");
    scanf("%d", &S_element);
    
    for(i = 0; i <= 4; i++) {
        if(a[i] == S_element) {
            printf("Element is present at %d\n", i + 1);
            break;
        }
    }
    
    if(i == 5) {
        printf("Element is not present\n");
    }

    return 0;
}

