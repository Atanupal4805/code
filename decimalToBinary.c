
#include <stdio.h>

int main(){
    int n,r,a[10],i=0;
    
    printf("enter decimal value: ");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        a[i]=r;
        i++;
        n=n/2;
    }
    for(i=9;i>=0;i--){
        printf("%d",a[i]);
    }
    
    return 0;
}
