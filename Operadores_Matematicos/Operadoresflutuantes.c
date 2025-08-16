#include <stdio.h>
 
int main() {
    //declarando variaveis flutuantes
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // A divisão de números flutuantes resulta em um número flutuante

    //exibe a operação das variaveis
    //o .2f significa que elas vão ser exibidas em 2 casas decimais
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;
}