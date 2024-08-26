#include <stdio.h>

int add(int, int);
int sub(int, int);
int multi(int, int);
int divi(int, int);

int main() {
    int p;
    p = add(30, 10);
    printf("Add: %d\n", p);
    p = sub(30, 10);
    printf("Sub: %d\n", p);
    p = multi(30, 10);
    printf("Multi: %d\n", p);
    p = divi(30, 10);
    printf("Divi: %d\n", p);

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int multi(int x, int y) {
    return x * y;
}

int divi(int x, int y) {
     
        return x / y;
    } 
        
    

