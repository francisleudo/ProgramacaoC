#include <stdio.h>

int main() {
    // declarar variáveis produto, u i estoque, double valor unitario,
    // u i quantidade minima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 100;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // exibe as informações dos produtos
    printf("Produto %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    //comparações com o valor mínimo de estoque
    printf("produto %s tem estoque minimo de %u e o valor unitario é R$ %.2f\n", produtoA, estoqueMinimoA, valorA);
    printf("produto %s tem estoque minimo de %u e o valor unitario é R$ %.2f\n", produtoB, estoqueMinimoB, valorB);
   
    //comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo? %d\n", produtoB, resultadoB);
   
    // comparaçõe entre os valoress totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f): %d\n", 
        estoqueA * valorA,
        estoqueB * valorB,
        (estoqueA * valorA) > (estoqueB * valorB));
    
    return 0;
}