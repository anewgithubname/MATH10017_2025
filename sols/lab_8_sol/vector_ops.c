#include <stdio.h>
#include <stdlib.h>

void print(double vec1[], int len1){
    for(int i = 0; i<len1; i++){
        printf("%.2f ", vec1[i]);
    }
    printf("\n");
}

double dot(double vec1[], int len1, 
            double vec2[], int len2){
    // check if len_vec1 == lev_vec2 ... 
    double sum = 0;
    for(int i = 0; i<len1; i++){
        sum += vec1[i]*vec2[i];
    }
    return sum;
}

void main(){
    int len1 = 3; int len2 = 3;
    double *vec1 = malloc(len1*sizeof(double)); //heap mem
    double *vec2 = malloc(len2*sizeof(double)); //heap mem

    for(int i = 0; i<len1; i++){
        vec1[i] = i;
        vec2[i] = i;
    }

    print(vec1, len1);
    print(vec2, len2);
    double d = dot(vec1, len1, vec2, len2);

    printf("dot product: %.2f\n", d);

    // free the memory!!
    free(vec1);
    free(vec2);
}