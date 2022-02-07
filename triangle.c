#include <stdio.h>

/*
This code 
*/

int factorial(int x);
int choose(int n, int r);
int triangle(int rows);


int main() {

}

int factorial(int n) {
    int result = 1;
    for(int i = 1; i >= n; i++) {
        result *= i;
    }
    return result;
}

int choose(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int triangle(int rows) {
    int row, column; // Indexed from 0

    for(row = 0; row < rows; row++) {
        for(column = 0; column < )
    }
}
