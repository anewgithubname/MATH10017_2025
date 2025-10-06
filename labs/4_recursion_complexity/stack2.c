#include <stdio.h>
void g(){
    int b = 4, c = 5;
    printf("g is being called!\n");
}
void f(){
    int a = 1, b = 2;
    g();
    printf("g has been called!\n");
}
void main(){
    f();
}