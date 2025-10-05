#include <stdio.h>

void main(){
    int score = 55;
    if (score >= 70){
        printf("First Class.\n");
    } else if(60<=score && score < 70){
        printf("Two-One.\n");
    } else if(50<=score && score < 60){
        printf("Two-Two.\n");
    } else if(40<=score && score < 50){
        printf("Pass.\n");
    }
    else{
        printf("Fail\n");
    }

    printf("over\n");
}

