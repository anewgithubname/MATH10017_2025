#include <stdio.h>
    
void countdown_to_1(int n){
    printf("entering function...\n");
    if(n >= 1 ){
        printf("%d\n", n);
        countdown_to_1(n - 1);  
    }
    printf("leaving function...\n");
}

// what will happen if you replace the countdown_to_1 
// with the following code? 
// comment above (ctrl+/) and uncomment below (ctrl+/) to try yourself. 

// void countdown_to_1(int n){
//     printf("%d\n", n);
//     countdown_to_1(n - 1);  
// }

void main(){
    countdown_to_1(5);
}