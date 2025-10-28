#include <stdio.h>
void main(){
    int a[3] = {2,3,4}; int *pa = &a[0];

    printf("%p\n", pa); // the pointer points to the first element

    // printf("\n");

    // printf("%p\n", &a[0]); // the address of the first element
    // printf("%p\n", &a[1]); // the address of the 2nd element


    printf("%p\n", a);
    // prints out, 000000c0db3ffbec, 000000c0db3ffbec. 
    // You can use pa and a interchangeably!!
}