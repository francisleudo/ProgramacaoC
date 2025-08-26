#include <stdio.h>

int main() {
    int numeroSinal = 3000000000; //este valor é maior que o máximo de um int
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal); 

    return 0;
}