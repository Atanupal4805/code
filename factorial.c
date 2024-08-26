
#include <stdio.h>

int fact(int);
int main(){
    
    int n,r;
    printf("enter the value of n and r :");
    scanf("%d%d",&n,&r);
   int result=fact(n)/(fact(r)*fact(n-r));

    printf("%d",result);
    

    return 0;
}
int fact(int n){
    int f=1,i;
      for(i=n;i>1;i--)
      {
          f=f*i;
      }
      
      return f;
    
}
