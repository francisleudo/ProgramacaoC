#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar as notas e a média
    // float é usado para permitir números com casas decimais
    float nota1, nota2, nota3;
    float media;

    // Exibe uma mensagem de boas-vindas e instruções
    printf("Programa para calcular a média de três notas\n");
    printf("========================================\n");
    printf("Digite três notas para calcular a média.\n");
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    // Cálculo da média
    // A média é a soma das notas dividida pelo número de notas
    // Fórmula: média = (nota1 + nota2 + nota3) / 3
    media = (nota1 + nota2 + nota3) / 3;
    //media = (float)(nota1 + nota2 + nota3) / 3; //não é necessário mas com float ele força para uma variavel flutuante.
    // Exibe o resultado
    //%.1f é usado para formatar a saída com uma casa decimal
    printf("A média das notas é: %.1f\n", media);

}