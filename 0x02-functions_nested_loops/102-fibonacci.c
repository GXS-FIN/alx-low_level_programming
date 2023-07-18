#include <stdio.h>

void fibonacci(int n) {
    int fib[n];
    int i;

    // First two numbers in the sequence
    fib[0] = 1;
    fib[1] = 2;

    printf("%d, %d", fib[0], fib[1]);

    // Generate the remaining Fibonacci numbers
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(", %d", fib[i]);
    }

    printf("\n");
}

int main(void) {
    fibonacci(50);

    return 0;
}
