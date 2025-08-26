#include <stdio.h>

int main() {
    short int numeroPequeno = 32767; // valor máximo para short int
    printf("Número pequeno atualizado (short int): %hd\n", numeroPequeno);

    numeroPequeno =32768; // valor fora do intervalo de short int
    printf("Número pequeno atualizado (short int): %hd\n", numeroPequeno);

     printf("\n ""Tamanho das variáveis:\n");
     printf("short int: %lu B - int: %lu B\n", sizeof(short int), sizeof(int));
     printf("long int: %lu B - long long int: %lu B\n", sizeof(long int), sizeof(long long int));

    return 0;
}