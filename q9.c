#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n = 7;  
    int resultado = fib(n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
