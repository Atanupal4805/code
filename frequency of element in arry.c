/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],b[5]={0},i,c;
    for(i=0;i<=4;i++)
    {
    printf("enter number:");
    scanf("%d",&a[i]);
        
    }
      for(i=0;i<=4;i++)
      {
          c=a[i];
          b[c]++;
      }
      for(i=0;i<=5;i++)
      {
          if(b[i]>0)
          printf("\n%d number is reapeted %d times",i,b[i]);
      }
      
    return 0;
}
