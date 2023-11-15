#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0; 
    } else {
        int cont = divisiveis(arr, tam - 1, x);
        if (arr[tam - 1] % x == 0) {
            return cont + 1;
        } else {
            return cont;
        }
    }
}

int main() {
    int numeros[] = {6, 12, 18, 24};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int divisor = 6;

    int quantidadeDivisiveis = divisiveis(numeros, tamanho, divisor);

    printf("Quantidade de números divisíveis por %d: %d\n", divisor, quantidadeDivisiveis);

    return 0;
}
