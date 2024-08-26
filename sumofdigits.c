
#include <stdio.h>

int main() {
    
    int n,r,sum=0;
 
    printf("Enter a number: ");    
    scanf("%d",&n);
    
    for( ;n>0;n=n/10) {
        r = n%10;
        sum += r;
    }
    
    printf("%d",sum);
    return 0;
}