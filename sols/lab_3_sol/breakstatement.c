#include <stdio.h>

void main(){
    int a = 1;
    while(a <= 100){
        if(a*a + a > 321){
            printf("The smallest a satisfies the inequality a*a + a > 321: %d\n", a);
            break; // it will exist loop immediately. 
        }
        a = a + 1;
    }

    printf("I will still be executed.\n");
}