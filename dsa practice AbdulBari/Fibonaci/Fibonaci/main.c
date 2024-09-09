#include <stdio.h>

int F[10];

int fib(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n - 2] == -1) {
            F[n - 2] = fib(n - 2);
        }
        if (F[n - 1] == -1) {
            F[n - 1] = fib(n - 1);
        }
    }
    return F[n - 2] + F[n - 1];
}

int main(int argc, const char * argv[]) {
    // Initialize F array
    for (int i = 0; i < 10; i++) {
        F[i] = -1;
    }

    // Calculate and print Fibonacci numbers
    printf("Fibonacci Series: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}

