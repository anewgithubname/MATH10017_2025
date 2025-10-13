#include <stdio.h>
void main(){
    //matrix A is store in the array A in row major order
    // A = [1, 2, 3
    //      4, 5, 6]
    int A[] = {1, 2, 3, 4, 5, 6}; 
    for (int i = 0; i < 2; i = i + 1){
        for (int j = 0; j < 3; j = j + 1){
            printf("%d ", A[i*3 + j]);
        }
        printf("\n");
    }
}