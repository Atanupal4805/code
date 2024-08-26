#include <stdio.h>

int add();
int main()
{
    int x,y;
    x= add();
    y= add();

 printf("%d, %d",x,y);


    return 0;
}

int add(){

    int a,b,sum;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum is %d\n",sum);

    
    return sum;
    
}









