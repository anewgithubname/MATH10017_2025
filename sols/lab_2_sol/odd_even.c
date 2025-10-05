#include <stdio.h>

void main(){
    int num = 74552240; 

    //modulo operator is %
    printf("remainder of 4/4 is %d\n", 4%4); 
    printf("remainder of 4/3 is %d\n", 4%3); 

    // write an if-else statement below 
    // so it prints out "odd" when num is odd. 
    // it prints out "even" when num is even. 
    // hint: copy and past the if-else example here and modify it. 
    if(num % 2 == 0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}