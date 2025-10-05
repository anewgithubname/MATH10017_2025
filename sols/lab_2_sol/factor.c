#include <stdio.h>

void main(){
    int num = 9*4*3; 

    //modulo operator is %
    printf("remainder of 4/4 is %d\n", 4%4); 
    printf("remainder of 4/3 is %d\n", 4%3); 

    // write an if-else-if ladder below 
    if(num%9 == 0){
        printf("divided by 9!\n");
    }else if(num%4 == 0){
        printf("divided by 4!\n");
    }else if(num%3 == 0){
        printf("divided by 3!\n");
    }else{
        printf("oops!\n");
    }
   
}