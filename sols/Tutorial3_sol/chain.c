#include <stdio.h>
#include <math.h>
double f(double x) { 
    return sin(x);
}

double df(double x) { 
    return cos(x);
}

double g(double x, int i){
    if(i == 1){
        return f(x);
    }else{
        return g(f(x), i - 1); 
    }
}

double dg(double x, int i){
    if(i == 1){
        return df(x);
    }else{
        return df(g(x, i - 1)) * dg(x, i - 1); 
    }
}

void main() { 
    double res = g(0.4321, 2);
    printf("%f\n", res); 

    res = dg(0.4321, 2);
    printf("%f\n", res);
}