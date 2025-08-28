#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 ==0) {
            printf("Número par e");
        } else {
            printf("Número ímpar e");
        }
        printf(" o Numero é positivo");
    } else if (numero == 0) {
        printf(" o Número é zero\n");
    } else if (numero < 0){
            printf(" o Numero é negativo");
        }
    }