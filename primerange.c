#include <stdio.h>

int prime(int);
int main(){
    
    int lb,ub,j,x;
    printf("enter the range:");
    scanf("%d%d",&lb,&ub);
    if (lb==1){
        lb=lb+1;
    }
    if (ub==1){
        ub=ub+1;
    }
    if (lb>ub){
        int temp;
        temp=lb;
        lb=ub;
        ub=temp;
    }
  for(j=lb;j<=ub;j++)
  {
      x=prime(j);
       if (x==1)
        {
            printf("%d\t",j);
        }      
      
  }
    
    return 0;
}
 
int prime(int n){
    int i,signal=1;
      for(i=2;i<=n-1;i++)
      {
          if (n%i==0)
          
          {
              signal=0;
          }
      }
      
      return signal;
    
}
