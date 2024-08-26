#include <stdio.h>

int main() {
    int a[5], min, max, i;
    
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    
    
    min = max = a[0];
    
    
    for(i = 1; i < 5; i++) 
    {
        if(a[i] > max) 
        {
            max = a[i];
        }
        if(a[i] < min) 
        {
            min = a[i];
        }
    }
    
    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
