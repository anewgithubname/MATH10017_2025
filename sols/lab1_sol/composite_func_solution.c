#include <stdio.h>
#include <math.h> // This is needed for using the sin/cos function

double f(double a, double b, double x){
    return sin(a*x+b);
}

double df(double a, double b, double x){
    return cos(a*x+b)*a;
}

int main(){
    printf("%f\n", f(1,.5,f(.5, .1, 1.5)));
    printf("%f\n", df(1,.5,f(.5, .1, 1.5))*df(.5, .1, 1.5));
}