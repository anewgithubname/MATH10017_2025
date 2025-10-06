#include <stdio.h>
    
void countdown_to_1(int i){
    printf("enter countdown(%d)\n", i);
    if(i >= 1 ){
        printf("%d\n", i);
        countdown_to_1(i - 1);  
    }
    printf("exit from countdown(%d)\n", i);
}

// what will happen if you replace the countdown_to_1 
// with the following code? 
// comment above (ctrl+/) and uncomment below (ctrl+/) to try yourself. 

// void countdown_to_1(int n){
//     printf("%d\n", n);
//     countdown_to_1(n - 1);  
// }

void main(){
    countdown_to_1(3);
}