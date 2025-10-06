#include <stdio.h>

void main(){
    int i; 
    for(i = 1; i <= 10; i= i + 1){
        if(i % 2 == 0){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // the following loop will NOT exit. 
    // Comment above loop (control + /) and uncomment (control + /) below to see. 

    // int i = 1; 
    // while(i < 10){
    //     if(i % 2 == 0){
    //         continue; 
    //     }
    //     printf("%d ", i);
    //     i = i + 1;
    // }
    // printf("\n");
}

