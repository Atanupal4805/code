/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch[100];
    char v[5]={'a','e','i','o','u'};
    int f[5]={0,0,0,0,0},j;
    printf("enter string");
    
    gets(ch);
    for(j=0;ch[j]!='\0';j++){
        if(ch[j]=='a')
        {
        f[0]++;
        }
        
         else if(ch[j]=='e')
        {
        f[1]++;
        }
        
        else if(ch[j]=='i')
        {
        f[2]++;
        }
        
        else if(ch[j]=='o')
        {
        f[3]++;
        }
        
        else if(ch[j]=='u')
        {
        f[4]++;
        }
        
        else
        {
            
        }
        
    }
    
    for(j=0;j<=4;j++)
    {
        printf("\nchar %c is repeated %d times",v[j],f[j]);
    }
        
    
    

    return 0;
}
