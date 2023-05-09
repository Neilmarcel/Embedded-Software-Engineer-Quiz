#include <stdio.h>

void SeriesofSquares(int N, int M) {
    while (N > 0 && M > 0) {
        if (N >= M) {
            printf("%dx%d,", M, M);// First print the maximum size of paper that can be cut from the given Dimension
            N = N-M;
        } else {
            printf("%dx%d,", N, N);
            M = M-N;
        }
    }
}

int main() {
    int N, M;

    // Taking Input From the User For the Dimentions
    printf("Enter the dimensions of the paper: ");
    scanf("%d %d", &N, &M);

    printf("Series of squares are:\n");
    SeriesofSquares(N, M);

    return 0;
}