#include <stdio.h>

void main(){
    for (int i = 1; i <= 4; i=i+1){
        for (int j = 1; j <= i; j=j+1){
            printf("*");
        }
        printf("\n");
    }

    /*
    prints out 
    *
    **
    ***
    ****
    */
}

