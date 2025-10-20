#include <stdio.h>

int max(int array[], int len){
    int max = array[0];
    for(int i = 1; i < len; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void swap(int array[]){
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
}

void print(int array[], int nrow, int ncol){
    for(int i = 0; i < nrow; i++){
        for(int j = 0; j < ncol; j++){
            printf("%d ", array[i*ncol + j]);
        }
        printf("\n");
    }
}

void main(){
    int a[] = {2,1,3,4,3};
    printf("%d\n", max(a, 5));

    int b[] = {1987,10};
    swap(b);
    printf("%d %d\n", b[0], b[1]);

    int matrix[] = {1,2,3,4,5,6};
    print(matrix, 3, 2);
}