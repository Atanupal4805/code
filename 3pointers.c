#include <stdio.h>

int main()
{
    int a=10;
    int *p,**q,***r;
    
    p=&a;
    q=&p;
    r=&q;
    
    
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",*p);
    *p=11;
    printf("%d\n",q);
    printf("%d\n",&q);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",r);
    printf("%d\n",&r);
    printf("%d\n",*r);
    printf("%d\n",**r);
    printf("%d\n",***r);

    return 0;
}

