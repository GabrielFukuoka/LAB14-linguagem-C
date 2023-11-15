// o codigo precisa ser alterafo pois notamos uma lentidao exagerada, podemos utilizar: 
#include <stdio.h>

int fib(int n, int memo[]) {
    if (n <= 1) {
        return n;
    } else if (memo[n] != -1) {
        return memo[n];
    } else {
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
        return memo[n];
    }
}

int main() {
    int n = 50; 
    int memo[n + 1]; 
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    int resultado = fib(n, memo);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
