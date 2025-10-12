# include <stdio.h>

double balance(int y){
    if (y == 0){
        return 1000; 
    }else{
        if (balance(y - 1) < 1100){
            return balance(y - 1) * 1.05; // fixed rate interest rate 
        } else{
            // interest rate for balance above 1100 is 2%
            return balance(y - 1) + 100 * 0.05 + (balance(y - 1) - 1100) * 0.02;
        }
    }
}

void main(){
    printf("%f\n", balance(10)); // balance after 10 years
}

