#include <stdio.h>

void f3(){
    int d = 6, e = 7; 
};
void f2(){
    int a = 4, b = 5; 
    f3();
}
void f1(){
    int a = 1, b = 2, c = 3;
    f2();
};
void main(){
    f1();
}