#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
  int i,j,k;  
    printf("enter set");
    
    gets (ch);
       i=0,j=0;
    for(i=0;ch[i]!='\0';i++){
        for(j=i;ch[j]!='\0';j++){
            for(k=i;k<=j;k++){
                printf("%c",ch[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}
