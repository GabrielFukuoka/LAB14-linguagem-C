#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return 1; 
    } else {
        if (arr[tam - 1] % x != 0) {
            return 0; 
        } else {
            return divisiveis(arr, tam - 1, x);
        }
    }
}

int main() {
    int numeros[] = {6, 12, 18, 24};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int divisor = 6;

    int resultado = divisiveis(numeros, tamanho, divisor);

    if (resultado) {
        printf("Todos os números são divisíveis por %d.\n", divisor);
    } else {
        printf("Pelo menos um número não é divisível por %d.\n", divisor);
    }

    return 0;
}
