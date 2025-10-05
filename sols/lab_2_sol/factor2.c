#include <stdio.h>

/* write a function named "is_divisible" below
input: an integer variable named num
output: none
*/

void is_divisible(int num){
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

void main(){
    int num = 9*4*3+1; 

    //modulo operator is %

    //call is_divisible function in a loop, 
    //so that it checks the divisibility for all integers from 939 to 945
   
   for(int i = 939; i <= 945; i = i + 1){
        is_divisible(i);
   }
}