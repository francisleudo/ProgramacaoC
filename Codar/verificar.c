#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("entre com a unidade: \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30.0){
        printf("Temperatura alta\n");
    } else {
        printf("Temperatura dentro dos parametros\n");
    }
    if(umidade > 50){
        printf("Umidade elevada\n");
    } else {
        printf("Umidade dentro dos parametros\n");
    }

    if(estoque < estoqueminimo){
        printf("Estoque abaixo do minimo\n");
    } else {
        printf("Estoque normal\n");
    }
}