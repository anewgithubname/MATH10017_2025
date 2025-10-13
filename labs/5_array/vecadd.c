#include <stdio.h>
void main(){
    //declare and initialize array a and b. 
    double a[] = {1.0, 2.0, 3.0}, 
           b[] = {2.0, 3.0, 4.0};
    double c[3];
    //addition
    for(int i = 0; i< 999; i=i+1){
        c[i] = a[i] + b[i];
    }

    printf("I am going to cause a runtime error.\n");

    printf("%d\n", a[2]);

    printf("The end.\n");
}