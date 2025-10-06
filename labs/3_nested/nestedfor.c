#include <stdio.h>

void main(){
    int score = 70;
    for (int i = 1; i <= 4; i=i+1){
        for (int j = 1; j <= i; j=j+1){
            printf("*");
        }
        printf("\n");
    }

    /*
    Now, it prints out 
    *
    **
    ***
    ****

    Modify the code, so it prints out  

    *
    ***
    *****
    *******
    *********
    */
}

