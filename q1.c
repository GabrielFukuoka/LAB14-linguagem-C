
#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int base = 2;
    int expoente = 3; 

    int resultado = potencia(base, expoente);

    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}
