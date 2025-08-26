#include <stdio.h>

int main() {
    int numeroNormal = 2147483647; //este valor é o máximo de um int
    long int numeroLongo = 2147483647; //este valor é maior que o máximo de um int
    
    printf ("Número regular (int): %d\n", numeroNormal);
    printf ("Número longo (long int): %ld\n", numeroLongo);

    numeroLongo = 2147483648; //este valor é o máximo de um long int
    printf ("Número longo máximo (long int): %ld\n", numeroLongo);
    return 0;
}