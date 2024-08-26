/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch[1000];
    int count=0,i;
    printf("enter a sentence:");
    gets(ch);
    i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]==32)
          {
              count++;
          }
          i++;
    }
     printf("no of words =%d",count+1);

    return 0;
}
