#include <stdio.h>

// write the max function below. Think: 
// 1. what is the return type of the function? 
// 2. What are the input variables of the function? what are the types of those? 
// 3. How to write the function itself? 

int max(int a, int b, int c){
    if(a < b){
        if(c > b){
            return c;
        }else{
            return b;
        }
    }else{
        if(c > a){
            return c;
        }else{
            return a;
        }
    }
}

void main(){
    // change the line below with different values of a, b and c
    // to test your program. 
    int a = -1, b = -1, c = 5;
    printf("the maximum among %d, %d, %d is %d \n", a, b, c, max(a,b,c));
}