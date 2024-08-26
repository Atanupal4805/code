#include <stdio.h>

int main(){
    int a[3][2],i,j;
    
        for (i=0;i<=2;i++){
            for(j=0;j<=1;j++){
                printf("enter element in row no:%d col no:%d ",i,j);
                scanf("%d",&a[i][j]);
            }
        }    
  
        printf("the 2D arry is:\n");
        for(i=0;i<=2;i++){
           for(j=0;j<=1;j++){
               printf("%d\t",a[i][j]);
           }
           printf("\n");
        }
     return 0;
}