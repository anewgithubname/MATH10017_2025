#include <stdio.h>

//compute dot product between a and b.
//a and b are two input arrays
double dot(double a[], double b[], int len){
    double s = 0;
    for(int i = 0; i< len; i++){
        s += a[i]*b[i];
    }
    return s;
}

void main(){
    double a[] = {1.0, 2.0, 3.0}, 
           b[] = {2.0, 3.0, 4.0};
    printf("%f", dot(a, b, 3)); 
}