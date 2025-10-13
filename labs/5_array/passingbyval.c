#include <stdio.h>
double square(double a){
    a = a*a; return a;
}
void main(){
    double n = 2;
    double nn = square(n);
    printf("%f %f\n", nn, n); 
    //display 4 2 
}