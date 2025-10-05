#include <stdio.h>

void f3(){
    int d = 6, e = 7; 
    printf("f3 is being called!\n");
};
void f2(){
    int a = 4, b = 5; 
    f3();
    printf("f3 has been called!\n");
}
void f1(){
    int a = 1, b = 2, c = 3;
    f2();
};
void main(){
    f1();
}