# include <stdio.h>

double sqrt_iter(double x, double a)
{
    // write your code here, one line only please.
    return x/2 + a/(2*x);
}

void main(){
    double a = 2; 

    double guess = 1; // think, what will happen if you set guess = 0?

    // finish the sqrt_iter function above 
    // write a loop to call sqrt_iter 10 times and update the sqrt guess
    for(int i = 0; i < 10; i++){
        guess = sqrt_iter(guess, a);

        // print the guess after each iteration
        printf("Iteration %d: sqrt(%.2f) = %.10f\n", i+1, a, guess);
    }
    
}
