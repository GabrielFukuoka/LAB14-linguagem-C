#include <stdio.h>

int fib(int n) {
    int fib_values[n + 1];
    fib_values[0] = 0;
    fib_values[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib_values[i] = fib_values[i - 1] + fib_values[i - 2];
    }

    return fib_values[n];
}

int main() {
    int n = 45; 
    int resultado = fib(n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
