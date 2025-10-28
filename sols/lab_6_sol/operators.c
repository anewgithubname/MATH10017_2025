#include <stdio.h>
void main(){
    int a = 1; 
    printf("The address of a is %p.\n", &a); 
    // displays "The address of a 
    // is <some memory space>".
    // note the specifier here is %p, p for pointer. 

    int *pa = &a;
    int b = *pa;
    printf("The value of a is %d.\n", b); 
    // displays the value of variable a.

    // TODO: print out the address of b, is it the same as a? why (why not)?
    printf("%p\n", &b);
}