#include <stdio.h>
#include <stdlib.h>

// matrix structure definition
struct matrix {
    int numrows; // number of rows
    int numcols; // number of columns
    int *elements; // pointer to the elements stored in row-major order
};

// obtain the element at row i and column j
// input: matrix M, row i, column j
// output: element at row i and column j
int get_elem(struct matrix M, int i, int j){
    return M.elements[i*M.numcols + j];
}

// printing matrix M
// input: matrix M
void print(struct matrix M){
    for (int i = 0; i < M.numrows; i ++){
        for (int j = 0; j < M.numcols; j++){
            printf("%d ", get_elem(M, i,j));
        }
        printf("\n");
    }
}

void main(){
    
    //construct matrix A using stack array. 
    int array1[] = {1,2,3,4,5,6};
    struct matrix A = {2, 3, array1};

    // test the get_elem + print functions
    print(A);
    printf("------------------\n");

}