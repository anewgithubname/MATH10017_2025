#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vector{
    int len;
    int *elements; //pointing to the array
                    //stores elements of the vector.
};

void print(struct vector v){
    // v.len contains the length of the vector!
    for (int i=0; i<v.len; i++){ 
        printf("%d ", v.elements[i]);
    }
    printf("\n");
}

//TODO: define a function dot that takes two vector structure variables and returns the dot product of the two vectors.
// Your code here
int dot(struct vector v1, struct vector v2){
    int sum = 0;
    for (int i=0; i<v1.len; i++){
        sum += v1.elements[i]*v2.elements[i];
    }
    return sum;
}

//TODO: define a function "norm" that takes a vector structure variable and returns the norm of the vector. 
// The norm of a vector is the square root of a dot a
// norm of [1,2,3] is square(a dot a)
// Hint: use the sqrt function from math.h
// Your code here
double norm(struct vector v){
    return sqrt(dot(v, v));
}


//TODO: define a function "dist" that takes two vector structure variables and returns the distance between the two vectors.
// The distance between two vectors is the norm of the difference of the two vectors.
double dist(struct vector v1, struct vector v2){
    return sqrt(dot(v1,v1) + dot(v2,v2) - 2*dot(v1,v2));
}

void main(){
    struct vector v; 
    v.len = 10; 
    // allocate heap memory for the vector
    v.elements = calloc(v.len, sizeof(int));

    // initialize the vector, using array initiliazation
    struct vector v2 = {10, calloc(10, sizeof(int))};

    // populate the vector with values 0,1,2,3,4,5,6,7,8,9
    for (int i=0; i<v.len; i++){
        v.elements[i] = i;
        v2.elements[i] = i;
    }

    print(v);
    print(v2);

    printf("______________________________\n");

    // this is my testing case#
    printf("testing cases: \n");
    int eu[] = {1,2,3};
    int ev[] = {4,5,6};
    struct vector testu = {3, eu};
    struct vector testv = {3, ev};
    print(testu); 
    print(testv);
    printf("______________________________\n");
    //TODO: test your functions here using testu and testv
    printf("dot product: %d, norm: %f, distance: %f. \n", dot(testu, testv), norm(testu), dist(testu, testv));

    // do I need to release memory for testu and testv? Why?

    //free the memory
    free(v.elements);
    free(v2.elements);
}