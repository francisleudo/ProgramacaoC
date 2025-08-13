#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré incremento ++a
    Pós incremento a++
    Decremento (--)
    Pré decremento --a
    Pós decremento a--
    */
    
    int numero1 = 1, resultado;
     //numero1 = numero1 + 1;
     //numero1 += 1;
     //Pos incremento;
     //Resultado = numero1;
     //numero++;
    printf("Antes Incremento: %d\n", numero1);
    resultado = numero1++;
    //printf("Depois Incremento: %d\n", numero1);
    printf("Apos Pós-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Após pré-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);


    //numero1--;
    //numero1 = numero1 - 1;
    //numero1 -= 1;
    //printf("Apos Decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Apos Pós-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
  
    resultado = --numero1;
    printf("Apos Pré-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

    return 0;
}