#include <stdio.h>

int main() {

    int numero;


    do {

        printf("Digite um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("O numero %d é par, saindo do programa...\n", numero);
        } else {
            printf("O numero %d é impar, tente novamente...\n", numero);
        }

    } while (numero % 2 != 0);
    {
        /* code */
    }
    
    printf("Programa finalizado...\n");

    return 0;
}