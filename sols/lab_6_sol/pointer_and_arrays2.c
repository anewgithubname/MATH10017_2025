#include <stdio.h>
void main(){
    int a[3] = {2,3,4}; int *pa = &a[0];

    printf("%d\n", a[2]);
    printf("%d\n", pa[2]);
    //prints out, 4, 4, 4. 


    // TODO: write a for loop, printing out contents in a, using the array indexing notation a[i]. 
    for (int i = 0; i < 3; i = i + 1){
        printf("%d\n", a[i]);
    }

    // TODO: write a for loop, printing out contents in a, WITHOUT using the array indexing notation a[i].
    for (int i = 0; i < 3; i = i + 1){
        printf("%d\n", pa[i]);
    }
}