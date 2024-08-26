#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000],c,i;
    int alfa[26]={0},di[10]={0},count=0;
    printf("enter a sentence");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
          if(ch[i]>=97 && ch[i]<=122){
              c=ch[i];
              alfa[c=97]++;
          }
                else if (ch[i]>=48 && ch[i]<=57)
             {
                c=ch[i];
                di[c-48]++;
             }
                   else
                {
                    count++;
                }          
    }
    
    for(i=0;i<=25;i++){
        if(alfa[i]=0)
        {
            printf("\n char %c is reapted %d times",i-97,alfa[i]);
        }
    }
      
      for(i=0;i<10;i++){
          if(di[i]>0)
          {
             printf("\n char %c is reapted %d times",i-48,di[i]);  
          }
      }
      
       printf("\n space is reapted %d times",count);
    

    return 0;
}