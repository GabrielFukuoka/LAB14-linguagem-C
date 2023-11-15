#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 0; 
    } else {
        int soma = divisiveis(arr, tam - 1, x);
        if (arr[tam - 1] % x == 0) {
            return soma + arr[tam - 1]; 
        } else {
            return soma;
        }
    }
}

int main() {
    int numeros[] = {6, 12, 18, 24};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int divisor = 6;

    int somaDivisiveis = divisiveis(numeros, tamanho, divisor);

    printf("Somatória dos números divisíveis por %d: %d\n", divisor, somaDivisiveis);

    return 0;
}
