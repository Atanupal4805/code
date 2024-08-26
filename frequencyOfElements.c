

#include <stdio.h>

int main() {
    
    int a[10], b[10]={0},i,c;
    
    for (i = 0; i <= 9; i++) {
        printf("enter element: ");
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i <= 10; i++) {
        c = a[i];
        b[c]++;
    }
    
    for (i = 0; i <= 9; i++) {
        if( b[i] > 0) {
            printf("%d element is repeated %d times\n",i,b[i]);
        }
    }
    
    return 0;
    
}