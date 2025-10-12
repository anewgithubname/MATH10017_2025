#include <stdio.h>
#include <math.h>

void fibonacci(int n){
    // your code here
    int n1 = 0; 
    int n2 = 1; 
    printf("%d\n", n1);
    printf("%d\n", n2);
    for (int i = 2; i < n; i = i + 1){
        int fib_i = n1 + n2;
        printf("%d\n", fib_i);
        n1 = n2; 
        n2 = fib_i; 
    }
}

void main(){
    fibonacci(10);
}