#include <stdio.h>
 
int main() {
    int idade;
    float altura;
    char opção;
    char nome[50];
    // sintaxe scanf

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    // Lê a idade do usuário
    // e armazena na variável idade
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    
    // Lê a idade do usuário
    // e armazena na variável idade 

    printf("Sua idade é: %d\n", idade);
    printf("Seu nome é: %s\n", nome);
    return 0;
}