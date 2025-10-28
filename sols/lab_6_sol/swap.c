#include <stdio.h>

void swap(int *pa, int *pb){
    // function body.
    int t = *pa; 
    *pa = *pb;
    *pb = t;
}

void main(){
    int a1 = 3, a2 = 2; 

    //call your function here
    //you cannot swap values of a1 and a2 here. 
    //you must call a function to swap values for you.
    swap(&a1, &a2);
    printf("%d %d\n", a1, a2); 
    // should display "2 3"
}