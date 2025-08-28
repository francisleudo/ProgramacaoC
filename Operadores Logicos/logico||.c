#include <stdio.h>

int main() {

    int a = 10, b = 5;

    //    if (a> 0 && b >0)
    if (a> 0 || b >0) //Esse operador retorna verdadeiro se pelo menos uma for verdadeira.
    {
        printf("Pelo menos uma das variáveis é positiva.\n");
    } else {
        printf("Nenhuma das variáveis é positiva.\n");
    }
}