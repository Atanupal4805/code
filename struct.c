****************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct atanu
{
    int r;
    char n[10];
    float m;
};

int main(){
    
    struct atanu m1;

    printf("enter the roll no of student 1:");
    scanf("%d",&m1.r);
    
     printf("enter the name of student 1:");
    scanf("%s",&m1.n);
    
     printf("enter the marks of student 1:");
    scanf("%f",&m1.m);
    
    
    printf("rollno=%d , name=%s , marks=%f ",m1.r,m1.n,m1.m);

    return 0;
}
