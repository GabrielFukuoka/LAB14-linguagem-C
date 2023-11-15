#include <stdio.h>

int mul(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + mul(a, b - 1);
    }
}

int main() {
    int num1 = 4;
    int num2 = 5;

    int resultado = mul(num1, num2);

    printf("%d multiplicado por %d é igual a %d\n", num1, num2, resultado);

    return 0;
}
