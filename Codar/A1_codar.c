#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("digite a sua altura: \n");
    scanf("%f", &altura);

    printf("digite o seu nome: \n");
    scanf("%s", nome);

    printf("Digite a matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura %f", idade, altura);
    return 0;

}