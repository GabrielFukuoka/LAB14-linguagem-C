#include <stdio.h>

double soma_array(double arr[], int tam) {
    if (tam == 0) {
        return 0.0;
    } else {
        return arr[tam - 1] + soma_array(arr, tam - 1);
    }
}

int main() {
    double numeros[] = {1.5, 2.3, 3.7, 4.1};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    double resultado = soma_array(numeros, tamanho);
    printf("%.2f\n", resultado);  

    return 0;
}
