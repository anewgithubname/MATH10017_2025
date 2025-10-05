#include <stdio.h> 
void goo(int a){
    printf("goo is being called!\n");
    printf("%d\n", a);
}
void koo(int a){
    printf("koo is being called!\n"); 
    goo(a);
}
void foo(){ 
    int a = 0; 
    koo(2);
    printf("koo has been called!\n"); 
}
void main(){ 
    foo();
}