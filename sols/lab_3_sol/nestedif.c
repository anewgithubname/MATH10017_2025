#include <stdio.h>

void main(){
    int score = 70;
    if(score >= 40){
        printf("congratulations! ");
        if(score >=70){
            printf("first class!\n");
        }else{
            printf("passed!\n");
        }
    }else{
        printf("student has failed!\n");
    }
}

